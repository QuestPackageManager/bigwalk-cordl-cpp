#pragma once
// IWYU pragma private; include "System/Xml/Schema/Compiler.hpp"
#include "System/Xml/Schema/zzzz__BaseProcessor_impl.hpp"
#include "System/Xml/Schema/zzzz__Compiler_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__ParticleContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAll_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAny_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaChoice_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContentRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContent_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupRef_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSequence_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Compiler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::XmlNameTable*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaCompilationSettings*)>(&::System::Xml::Schema::Compiler::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181c84c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSet*, ::System::Xml::Schema::SchemaInfo*)>(&::System::Xml::Schema::Compiler::Execute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181c7f6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"Execute", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchema*, bool)>(&::System::Xml::Schema::Compiler::Prepare)> {
  constexpr static std::size_t size = 0xf90;
  constexpr static std::size_t addrs = 0x181c83200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"Prepare", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.UpdateSForSSimpleTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)()>(&::System::Xml::Schema::Compiler::UpdateSForSSimpleTypes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181c84b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"UpdateSForSSimpleTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.Output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::SchemaInfo*)>(&::System::Xml::Schema::Compiler::Output)> {
  constexpr static std::size_t size = 0xbd0;
  constexpr static std::size_t addrs = 0x181c82630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"Output", {}, {::i2c::type_of<::System::Xml::Schema::SchemaInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.ImportAllCompiledSchemas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Xml::Schema::Compiler::ImportAllCompiledSchemas)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181c7fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"ImportAllCompiledSchemas", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.Compile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)()>(&::System::Xml::Schema::Compiler::Compile)> {
  constexpr static std::size_t size = 0x1870;
  constexpr static std::size_t addrs = 0x181c7ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"Compile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(&::System::Xml::Schema::Compiler::CleanupAttribute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181c772c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupAttribute", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupAttributeGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(&::System::Xml::Schema::Compiler::CleanupAttributeGroup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181c77200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupAttributeGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupComplexType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::Compiler::CleanupComplexType)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x181c773b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupComplexType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupSimpleType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::Compiler::CleanupSimpleType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181c77c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupSimpleType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::Compiler::CleanupElement)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181c77890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupElement", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::Compiler::CleanupAttributes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181c77300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupAttributes", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::Compiler::CleanupGroup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181c77a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupParticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CleanupParticle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181c77aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupParticle", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.ProcessSubstitutionGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)()>(&::System::Xml::Schema::Compiler::ProcessSubstitutionGroups)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x181c84190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"ProcessSubstitutionGroups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileSubstitutionGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSubstitutionGroup*)>(&::System::Xml::Schema::Compiler::CompileSubstitutionGroup)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x181c7d980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileSubstitutionGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.RecursivelyCheckRedefinedGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroup*, ::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::Compiler::RecursivelyCheckRedefinedGroups)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181c84800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"RecursivelyCheckRedefinedGroups", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.RecursivelyCheckRedefinedAttributeGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Xml::Schema::XmlSchemaAttributeGroup*)>(&::System::Xml::Schema::Compiler::RecursivelyCheckRedefinedAttributeGroups)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181c84780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"RecursivelyCheckRedefinedAttributeGroups", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::Compiler::CompileGroup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181c7b5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileSimpleType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::Compiler::CompileSimpleType)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x181c7d200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileSimpleType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileBaseMemberTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::Compiler::CompileBaseMemberTypes)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181c789d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileBaseMemberTypes", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CheckUnionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::Compiler::CheckUnionType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181c60f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CheckUnionType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::Compiler::CompileComplexType)> {
  constexpr static std::size_t size = 0x980;
  constexpr static std::size_t addrs = 0x181c79e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileSimpleContentExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*)>(&::System::Xml::Schema::Compiler::CompileSimpleContentExtension)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181c7cc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileSimpleContentExtension", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileSimpleContentRestriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*)>(&::System::Xml::Schema::Compiler::CompileSimpleContentRestriction)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x181c7cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileSimpleContentRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexContentExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentExtension*)>(&::System::Xml::Schema::Compiler::CompileComplexContentExtension)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181c78ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexContentExtension", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContentExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexContentRestriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*)>(&::System::Xml::Schema::Compiler::CompileComplexContentRestriction)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181c79020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexContentRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContentRestriction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CheckParticleDerivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::Compiler::CheckParticleDerivation)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x181c76d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CheckParticleDerivation", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CheckParticleDerivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CheckParticleDerivation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181c77140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CheckParticleDerivation", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileContentTypeParticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CompileContentTypeParticle)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181c7a790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileContentTypeParticle", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeParticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeParticle)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181c75ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeParticle", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::Compiler::CannonicalizeElement)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181c752b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeElement", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeGroupRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroupRef*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeGroupRef)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x181c754e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeGroupRef", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupRef*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAll*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeAll)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181c74a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeAll", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAll*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeChoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaChoice*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeChoice)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x181c74ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeChoice", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSequence*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeSequence)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x181c76150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeSequence", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizePointlessRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CannonicalizePointlessRoot)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x181c75d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizePointlessRoot", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsValidRestriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::IsValidRestriction)> {
  constexpr static std::size_t size = 0x10f0;
  constexpr static std::size_t addrs = 0x181c81540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsValidRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsElementFromElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::Compiler::IsElementFromElement)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181c7ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsElementFromElement", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsElementFromAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::Compiler::IsElementFromAny)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181c7fdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsElementFromAny", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsAnyFromAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAny*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::Compiler::IsAnyFromAny)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181c7fbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsAnyFromAny", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsGroupBaseFromAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::Compiler::IsGroupBaseFromAny)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181c807e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsGroupBaseFromAny", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsElementFromGroupBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaGroupBase*)>(&::System::Xml::Schema::Compiler::IsElementFromGroupBase)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x181c80080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsElementFromGroupBase", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsChoiceFromChoiceSubstGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaChoice*, ::System::Xml::Schema::XmlSchemaChoice*)>(&::System::Xml::Schema::Compiler::IsChoiceFromChoiceSubstGroup)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181c7fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsChoiceFromChoiceSubstGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsGroupBaseFromGroupBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaGroupBase*, bool)>(&::System::Xml::Schema::Compiler::IsGroupBaseFromGroupBase)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181c80b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsGroupBaseFromGroupBase", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsSequenceFromAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaAll*)>(&::System::Xml::Schema::Compiler::IsSequenceFromAll)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181c80f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsSequenceFromAll", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAll*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsSequenceFromChoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaChoice*)>(&::System::Xml::Schema::Compiler::IsSequenceFromChoice)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181c81200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsSequenceFromChoice", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsValidOccurrenceRangeRestriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::IsValidOccurrenceRangeRestriction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181c6b750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsValidOccurrenceRangeRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsValidOccurrenceRangeRestriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Decimal, ::System::Decimal, ::System::Decimal, ::System::Decimal)>(&::System::Xml::Schema::Compiler::IsValidOccurrenceRangeRestriction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181c6b6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsValidOccurrenceRangeRestriction", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetMappingParticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::Compiler::GetMappingParticle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181c7f960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetMappingParticle", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsParticleEmptiable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::IsParticleEmptiable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181c80df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsParticleEmptiable", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CalculateEffectiveTotalRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*, ::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Xml::Schema::Compiler::CalculateEffectiveTotalRange)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x181c74200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CalculateEffectiveTotalRange", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.PushComplexType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::Compiler::PushComplexType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181c84760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"PushComplexType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetSchemaContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::GetSchemaContentType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181c6a6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetSchemaContentType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileAttributeGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(&::System::Xml::Schema::Compiler::CompileAttributeGroup)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x181c77da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileAttributeGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileLocalAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaDerivationMethod)>(&::System::Xml::Schema::Compiler::CompileLocalAttributes)> {
  constexpr static std::size_t size = 0xd20;
  constexpr static std::size_t addrs = 0x181c7bb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileLocalAttributes", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CheckAtrributeGroupRestriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Xml::Schema::XmlSchemaAttributeGroup*)>(&::System::Xml::Schema::Compiler::CheckAtrributeGroupRestriction)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x181c766b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CheckAtrributeGroupRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsProcessContentsRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&::System::Xml::Schema::Compiler::IsProcessContentsRestricted)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181c80e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsProcessContentsRestricted", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileAnyAttributeUnion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&::System::Xml::Schema::Compiler::CompileAnyAttributeUnion)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181c77d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileAnyAttributeUnion", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileAnyAttributeIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&::System::Xml::Schema::Compiler::CompileAnyAttributeIntersection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181c77cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileAnyAttributeIntersection", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(&::System::Xml::Schema::Compiler::CompileAttribute)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x181c78300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileAttribute", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.SetDefaultFixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttribute*, ::System::Xml::Schema::SchemaAttDef*)>(&::System::Xml::Schema::Compiler::SetDefaultFixed)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181c84950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"SetDefaultFixed", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileIdentityConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(&::System::Xml::Schema::Compiler::CompileIdentityConstraint)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x181c7b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileIdentityConstraint", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::Compiler::CompileElement)> {
  constexpr static std::size_t size = 0xcd0;
  constexpr static std::size_t addrs = 0x181c7a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileElement", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ContentValidator* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::Compiler::CompileComplexContent)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x181c792b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexContent", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.BuildParticleContentModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::ParticleContentValidator*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::BuildParticleContentModel)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x181c73cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"BuildParticleContentModel", {}, {::i2c::type_of<::System::Xml::Schema::ParticleContentValidator*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileParticleElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CompileParticleElements)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181c7c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileParticleElements", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileParticleElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CompileParticleElements)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181c7c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileParticleElements", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexTypeElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::Compiler::CompileComplexTypeElements)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181c79d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexTypeElements", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetSimpleType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::Schema::Compiler::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::Compiler::GetSimpleType)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181c7fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetSimpleType", {}, {::i2c::type_of<::System::Xml::XmlQualifiedName*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetComplexType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (::System::Xml::Schema::Compiler::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::Compiler::GetComplexType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181c7f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetComplexType", {}, {::i2c::type_of<::System::Xml::XmlQualifiedName*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetAnySchemaType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::Compiler::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::Compiler::GetAnySchemaType)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181c7f770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetAnySchemaType", {}, {::i2c::type_of<::System::Xml::XmlQualifiedName*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CopyPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAnnotated*, ::System::Xml::Schema::XmlSchemaAnnotated*, bool)>(&::System::Xml::Schema::Compiler::CopyPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181c7f630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CopyPosition", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsFixedEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::SchemaDeclBase*, ::System::Xml::Schema::SchemaDeclBase*)>(&::System::Xml::Schema::Compiler::IsFixedEqual)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181c80690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsFixedEqual", {}, {::i2c::type_of<::System::Xml::Schema::SchemaDeclBase*>(), ::i2c::type_of<::System::Xml::Schema::SchemaDeclBase*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::Compiler::__cordl_internal_get_restrictionErrorMsg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictionErrorMsg;
}
constexpr ::StringW const& System::Xml::Schema::Compiler::__cordl_internal_get_restrictionErrorMsg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictionErrorMsg;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_restrictionErrorMsg(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restrictionErrorMsg = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_attributeGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributeGroups;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_attributeGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributeGroups;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_attributeGroups(::System::Xml::Schema::XmlSchemaObjectTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributeGroups = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_elements(::System::Xml::Schema::XmlSchemaObjectTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_schemaTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schemaTypes;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_schemaTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schemaTypes;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_schemaTypes(::System::Xml::Schema::XmlSchemaObjectTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schemaTypes = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_groups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groups;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_groups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groups;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_groups(::System::Xml::Schema::XmlSchemaObjectTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groups = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_notations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notations;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_notations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notations;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_notations(::System::Xml::Schema::XmlSchemaObjectTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notations = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_examplars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___examplars;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_examplars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___examplars;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_examplars(::System::Xml::Schema::XmlSchemaObjectTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___examplars = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_identityConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identityConstraints;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_identityConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identityConstraints;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_identityConstraints(::System::Xml::Schema::XmlSchemaObjectTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___identityConstraints = value;
}
constexpr ::System::Collections::Stack*& System::Xml::Schema::Compiler::__cordl_internal_get_complexTypeStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___complexTypeStack;
}
constexpr ::System::Collections::Stack* const& System::Xml::Schema::Compiler::__cordl_internal_get_complexTypeStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___complexTypeStack;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_complexTypeStack(::System::Collections::Stack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___complexTypeStack = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::Compiler::__cordl_internal_get_schemasToCompile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schemasToCompile;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::Compiler::__cordl_internal_get_schemasToCompile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schemasToCompile;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_schemasToCompile(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schemasToCompile = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::Compiler::__cordl_internal_get_importedSchemas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___importedSchemas;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::Compiler::__cordl_internal_get_importedSchemas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___importedSchemas;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_importedSchemas(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___importedSchemas = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::Compiler::__cordl_internal_get_schemaForSchema()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schemaForSchema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::Compiler::__cordl_internal_get_schemaForSchema() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schemaForSchema;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_schemaForSchema(::System::Xml::Schema::XmlSchema*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schemaForSchema = value;
}
inline void System::Xml::Schema::Compiler::_ctor(::System::Xml::XmlNameTable*  nameTable, ::System::Xml::Schema::ValidationEventHandler*  eventHandler, ::System::Xml::Schema::XmlSchema*  schemaForSchema, ::System::Xml::Schema::XmlSchemaCompilationSettings*  compilationSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, eventHandler, schemaForSchema, compilationSettings);
}
inline bool System::Xml::Schema::Compiler::Execute(::System::Xml::Schema::XmlSchemaSet*  schemaSet, ::System::Xml::Schema::SchemaInfo*  schemaCompiledInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"Execute", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schemaSet, schemaCompiledInfo);
}
inline void System::Xml::Schema::Compiler::Prepare(::System::Xml::Schema::XmlSchema*  schema, bool  cleanup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"Prepare", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema, cleanup);
}
inline void System::Xml::Schema::Compiler::UpdateSForSSimpleTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"UpdateSForSSimpleTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::Compiler::Output(::System::Xml::Schema::SchemaInfo*  schemaInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"Output", {}, {::i2c::type_of<::System::Xml::Schema::SchemaInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaInfo);
}
inline void System::Xml::Schema::Compiler::ImportAllCompiledSchemas(::System::Xml::Schema::XmlSchemaSet*  schemaSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"ImportAllCompiledSchemas", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaSet);
}
inline bool System::Xml::Schema::Compiler::Compile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"Compile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::Compiler::CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupAttribute", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::Compiler::CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup*  attributeGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupAttributeGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::Compiler::CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupComplexType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::Compiler::CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupSimpleType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simpleType);
}
inline void System::Xml::Schema::Compiler::CleanupElement(::System::Xml::Schema::XmlSchemaElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupElement", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Xml::Schema::Compiler::CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupAttributes", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void System::Xml::Schema::Compiler::CleanupGroup(::System::Xml::Schema::XmlSchemaGroup*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void System::Xml::Schema::Compiler::CleanupParticle(::System::Xml::Schema::XmlSchemaParticle*  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CleanupParticle", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::Compiler::ProcessSubstitutionGroups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"ProcessSubstitutionGroups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::Compiler::CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup*  substitutionGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileSubstitutionGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, substitutionGroup);
}
inline void System::Xml::Schema::Compiler::RecursivelyCheckRedefinedGroups(::System::Xml::Schema::XmlSchemaGroup*  redefinedGroup, ::System::Xml::Schema::XmlSchemaGroup*  baseGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"RecursivelyCheckRedefinedGroups", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, redefinedGroup, baseGroup);
}
inline void System::Xml::Schema::Compiler::RecursivelyCheckRedefinedAttributeGroups(::System::Xml::Schema::XmlSchemaAttributeGroup*  attributeGroup, ::System::Xml::Schema::XmlSchemaAttributeGroup*  baseAttributeGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"RecursivelyCheckRedefinedAttributeGroups", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup, baseAttributeGroup);
}
inline void System::Xml::Schema::Compiler::CompileGroup(::System::Xml::Schema::XmlSchemaGroup*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void System::Xml::Schema::Compiler::CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileSimpleType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simpleType);
}
inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> System::Xml::Schema::Compiler::CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileBaseMemberTypes", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>>(this, ___internal_method, simpleType);
}
inline void System::Xml::Schema::Compiler::CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType*  unionMember, ::System::Collections::ArrayList*  memberTypeDefinitions, ::System::Xml::Schema::XmlSchemaSimpleType*  parentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CheckUnionType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unionMember, memberTypeDefinitions, parentType);
}
inline void System::Xml::Schema::Compiler::CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::Compiler::CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*  simpleExtension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileSimpleContentExtension", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, simpleExtension);
}
inline void System::Xml::Schema::Compiler::CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*  simpleRestriction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileSimpleContentRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, simpleRestriction);
}
inline void System::Xml::Schema::Compiler::CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaComplexContentExtension*  complexExtension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexContentExtension", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContentExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, complexContent, complexExtension);
}
inline void System::Xml::Schema::Compiler::CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*  complexRestriction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexContentRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContentRestriction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, complexContent, complexRestriction);
}
inline void System::Xml::Schema::Compiler::CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType*  complexType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CheckParticleDerivation", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::Compiler::CheckParticleDerivation(::System::Xml::Schema::XmlSchemaParticle*  derivedParticle, ::System::Xml::Schema::XmlSchemaParticle*  baseParticle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CheckParticleDerivation", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derivedParticle, baseParticle);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle*  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileContentTypeParticle", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, particle);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle*  particle, bool  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeParticle", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, particle, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeElement", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, element);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef*  groupRef, bool  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeGroupRef", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupRef*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, groupRef, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll*  all, bool  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeAll", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAll*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, all, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice*  choice, bool  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeChoice", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, choice, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence*  sequence, bool  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizeSequence", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, sequence, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizePointlessRoot(::System::Xml::Schema::XmlSchemaParticle*  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CannonicalizePointlessRoot", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, particle);
}
inline bool System::Xml::Schema::Compiler::IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle*  derivedParticle, ::System::Xml::Schema::XmlSchemaParticle*  baseParticle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsValidRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedParticle, baseParticle);
}
inline bool System::Xml::Schema::Compiler::IsElementFromElement(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaElement*  baseElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsElementFromElement", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedElement, baseElement);
}
inline bool System::Xml::Schema::Compiler::IsElementFromAny(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaAny*  baseAny)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsElementFromAny", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedElement, baseAny);
}
inline bool System::Xml::Schema::Compiler::IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny*  derivedAny, ::System::Xml::Schema::XmlSchemaAny*  baseAny)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsAnyFromAny", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedAny, baseAny);
}
inline bool System::Xml::Schema::Compiler::IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase*  derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny*  baseAny)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsGroupBaseFromAny", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedGroupBase, baseAny);
}
inline bool System::Xml::Schema::Compiler::IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase*  baseGroupBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsElementFromGroupBase", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedElement, baseGroupBase);
}
inline bool System::Xml::Schema::Compiler::IsChoiceFromChoiceSubstGroup(::System::Xml::Schema::XmlSchemaChoice*  derivedChoice, ::System::Xml::Schema::XmlSchemaChoice*  baseChoice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsChoiceFromChoiceSubstGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedChoice, baseChoice);
}
inline bool System::Xml::Schema::Compiler::IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase*  derivedGroupBase, ::System::Xml::Schema::XmlSchemaGroupBase*  baseGroupBase, bool  skipEmptableOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsGroupBaseFromGroupBase", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedGroupBase, baseGroupBase, skipEmptableOnly);
}
inline bool System::Xml::Schema::Compiler::IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence*  derivedSequence, ::System::Xml::Schema::XmlSchemaAll*  baseAll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsSequenceFromAll", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAll*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedSequence, baseAll);
}
inline bool System::Xml::Schema::Compiler::IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence*  derivedSequence, ::System::Xml::Schema::XmlSchemaChoice*  baseChoice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsSequenceFromChoice", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedSequence, baseChoice);
}
inline bool System::Xml::Schema::Compiler::IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle*  derivedParticle, ::System::Xml::Schema::XmlSchemaParticle*  baseParticle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsValidOccurrenceRangeRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedParticle, baseParticle);
}
inline bool System::Xml::Schema::Compiler::IsValidOccurrenceRangeRestriction(::System::Decimal  minOccurs, ::System::Decimal  maxOccurs, ::System::Decimal  baseMinOccurs, ::System::Decimal  baseMaxOccurs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsValidOccurrenceRangeRestriction", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, minOccurs, maxOccurs, baseMinOccurs, baseMaxOccurs);
}
inline int32_t System::Xml::Schema::Compiler::GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle*  particle, ::System::Xml::Schema::XmlSchemaObjectCollection*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetMappingParticle", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particle, collection);
}
inline bool System::Xml::Schema::Compiler::IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle*  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsParticleEmptiable", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::Compiler::CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle*  particle, ::by_ref<::System::Decimal>  minOccurs, ::by_ref<::System::Decimal>  maxOccurs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CalculateEffectiveTotalRange", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle, minOccurs, maxOccurs);
}
inline void System::Xml::Schema::Compiler::PushComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"PushComplexType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaContentType System::Xml::Schema::Compiler::GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaParticle*  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetSchemaContentType", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType>(this, ___internal_method, complexType, complexContent, particle);
}
inline void System::Xml::Schema::Compiler::CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup*  attributeGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileAttributeGroup", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::Compiler::CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType*  baseType, ::System::Xml::Schema::XmlSchemaComplexType*  derivedType, ::System::Xml::Schema::XmlSchemaObjectCollection*  attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute*  anyAttribute, ::System::Xml::Schema::XmlSchemaDerivationMethod  derivedBy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileLocalAttributes", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseType, derivedType, attributes, anyAttribute, derivedBy);
}
inline void System::Xml::Schema::Compiler::CheckAtrributeGroupRestriction(::System::Xml::Schema::XmlSchemaAttributeGroup*  baseAttributeGroup, ::System::Xml::Schema::XmlSchemaAttributeGroup*  derivedAttributeGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CheckAtrributeGroupRestriction", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseAttributeGroup, derivedAttributeGroup);
}
inline bool System::Xml::Schema::Compiler::IsProcessContentsRestricted(::System::Xml::Schema::XmlSchemaComplexType*  baseType, ::System::Xml::Schema::XmlSchemaAnyAttribute*  derivedAttributeWildcard, ::System::Xml::Schema::XmlSchemaAnyAttribute*  baseAttributeWildcard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsProcessContentsRestricted", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, baseType, derivedAttributeWildcard, baseAttributeWildcard);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::Compiler::CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute*  a, ::System::Xml::Schema::XmlSchemaAnyAttribute*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileAnyAttributeUnion", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*>(this, ___internal_method, a, b);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::Compiler::CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute*  a, ::System::Xml::Schema::XmlSchemaAnyAttribute*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileAnyAttributeIntersection", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*>(this, ___internal_method, a, b);
}
inline void System::Xml::Schema::Compiler::CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute*  xa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileAttribute", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xa);
}
inline void System::Xml::Schema::Compiler::SetDefaultFixed(::System::Xml::Schema::XmlSchemaAttribute*  xa, ::System::Xml::Schema::SchemaAttDef*  decl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"SetDefaultFixed", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xa, decl);
}
inline void System::Xml::Schema::Compiler::CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint*  xi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileIdentityConstraint", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xi);
}
inline void System::Xml::Schema::Compiler::CompileElement(::System::Xml::Schema::XmlSchemaElement*  xe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileElement", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xe);
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::Compiler::CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType*  complexType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexContent", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ContentValidator*>(this, ___internal_method, complexType);
}
inline bool System::Xml::Schema::Compiler::BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator*  contentValidator, ::System::Xml::Schema::XmlSchemaParticle*  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"BuildParticleContentModel", {}, {::i2c::type_of<::System::Xml::Schema::ParticleContentValidator*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contentValidator, particle);
}
inline void System::Xml::Schema::Compiler::CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaParticle*  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileParticleElements", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, particle);
}
inline void System::Xml::Schema::Compiler::CompileParticleElements(::System::Xml::Schema::XmlSchemaParticle*  particle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileParticleElements", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::Compiler::CompileComplexTypeElements(::System::Xml::Schema::XmlSchemaComplexType*  complexType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CompileComplexTypeElements", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::Compiler::GetSimpleType(::System::Xml::XmlQualifiedName*  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetSimpleType", {}, {::i2c::type_of<::System::Xml::XmlQualifiedName*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Xml::Schema::Compiler::GetComplexType(::System::Xml::XmlQualifiedName*  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetComplexType", {}, {::i2c::type_of<::System::Xml::XmlQualifiedName*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::Compiler::GetAnySchemaType(::System::Xml::XmlQualifiedName*  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"GetAnySchemaType", {}, {::i2c::type_of<::System::Xml::XmlQualifiedName*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method, name);
}
inline void System::Xml::Schema::Compiler::CopyPosition(::System::Xml::Schema::XmlSchemaAnnotated*  to, ::System::Xml::Schema::XmlSchemaAnnotated*  from, bool  copyParent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"CopyPosition", {}, {::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotated*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, to, from, copyParent);
}
inline bool System::Xml::Schema::Compiler::IsFixedEqual(::System::Xml::Schema::SchemaDeclBase*  baseDecl, ::System::Xml::Schema::SchemaDeclBase*  derivedDecl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::Compiler*>(),
                        {"IsFixedEqual", {}, {::i2c::type_of<::System::Xml::Schema::SchemaDeclBase*>(), ::i2c::type_of<::System::Xml::Schema::SchemaDeclBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, baseDecl, derivedDecl);
}
inline ::System::Xml::Schema::Compiler* System::Xml::Schema::Compiler::New_ctor(::System::Xml::XmlNameTable*  nameTable, ::System::Xml::Schema::ValidationEventHandler*  eventHandler, ::System::Xml::Schema::XmlSchema*  schemaForSchema, ::System::Xml::Schema::XmlSchemaCompilationSettings*  compilationSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Compiler*>(nameTable, eventHandler, schemaForSchema, compilationSettings));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Compiler::Compiler()   {
}
