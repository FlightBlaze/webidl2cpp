#include "definition.h"

namespace NewtooWebInterfaceMapper_core
{
    Definition::Definition(DefinitionType aType, IDL* aIdl)
        :mType(aType), mIdl(aIdl)
    {}

    Definition::~Definition()
    {}

    DefinitionType Definition::type() const
    {
        return mType;
    }

    IDL* Definition::idl() const
    {
        return mIdl;
    }

    const char open_rule = '{';

    DefinitionType Definition::defineType(std::string decl)
    {
        if(decl.find(open_rule) != std::string::npos)
        {
            std::string pre = decl.substr(0, decl.find(open_rule));

            if(pre.find("interface ") != std::string::npos)
                return INTERFACE;
            else if(pre.find("dictionary ") != std::string::npos)
                return DICTIONARY;
            else if(pre.find("enum ") != std::string::npos)
                return ENUMERATION;
        } else
        {
            if(decl.find("typedef ") == 0)
                return TYPEDEFINE;
            else if(decl.find("implements ") != std::string::npos)
                return IMPLEMENTS;
            else if(decl.find("includes ") != std::string::npos)
                return INCLUDES;
            else if(decl.find("callback ") != std::string::npos)
                return CALLBACK_TYPE;
        }
        return UNKNOWN_TYPE;
    }

    std::string Definition::serializeHeader()
    {
        return nullstr;
    }
    std::string Definition::serializeSource()
    {
        return nullstr;
    }
    void Definition::cascade()
    {

    }

    std::string Definition::serializeAboveSource()
    {
        return nullstr;
    }
}
