#pragma once

#include <string>

#define nullstr ""

namespace NewtooWebInterfaceMapper_core
{
    class IDL;

    enum DefinitionType
    {
        INTERFACE,
        DICTIONARY,
        ENUMERATION,
        TYPEDEFINE,
        IMPLEMENTS,
        INCLUDES,
        CALLBACK_TYPE,
        UNKNOWN_TYPE
    };

    class Definition
    {
    public:
        Definition(DefinitionType aType, IDL* aIdl);
        DefinitionType type() const;
        virtual ~Definition();

        IDL* idl() const;

        static DefinitionType defineType(std::string decl);

        /*
            Тут какой-то странный баг с этими виртуальными функциями. Они не переназначаются.
        */

        virtual std::string serializeHeader();
        virtual std::string serializeSource();
        virtual void cascade();

        virtual std::string serializeAboveSource();
        /*
            Добавляет текст перед исходным кодом.
            Например, интерфейс добавляет директиву #include
        */

    protected:

        DefinitionType mType;
        IDL* mIdl;
    };
}
