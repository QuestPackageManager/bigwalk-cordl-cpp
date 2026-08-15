#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaCollectionCompiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseProcessor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaCollectionCompiler)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Stack;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class ParticleContentValidator;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaAll;
}
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaAny;
}
namespace System::Xml::Schema {
class XmlSchemaAttributeGroup;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaChoice;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContentRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContent;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaGroupBase;
}
namespace System::Xml::Schema {
class XmlSchemaGroupRef;
}
namespace System::Xml::Schema {
class XmlSchemaGroup;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchemaSequence;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroupV1Compat;
}
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroup;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaCollectionCompiler;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::SchemaCollectionCompiler*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::SchemaCollectionCompiler*, "System.Xml.Schema", "SchemaCollectionCompiler");
// Dependencies System.Xml.Schema.BaseProcessor
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SchemaCollectionCompiler
class CORDL_TYPE SchemaCollectionCompiler : public ::System::Xml::Schema::BaseProcessor {
public:
// Declarations
/// @brief Field compileContentModel, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_compileContentModel, put=__cordl_internal_set_compileContentModel)) bool  compileContentModel;

/// @brief Field complexTypeStack, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_complexTypeStack, put=__cordl_internal_set_complexTypeStack)) ::System::Collections::Stack*  complexTypeStack;

/// @brief Field examplars, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_examplars, put=__cordl_internal_set_examplars)) ::System::Xml::Schema::XmlSchemaObjectTable*  examplars;

/// @brief Field schema, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_schema, put=__cordl_internal_set_schema)) ::System::Xml::Schema::XmlSchema*  schema;

/// @brief Method BuildParticleContentModel, addr 0x181c5e0c0, size 0x520, virtual false, abstract: false, final false
inline void BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator*  contentValidator, ::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method CalculateEffectiveTotalRange, addr 0x181c5e5e0, size 0x8d0, virtual false, abstract: false, final false
inline void CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle*  particle, ::by_ref<::System::Decimal>  minOccurs, ::by_ref<::System::Decimal>  maxOccurs) ;

/// @brief Method CalculateSequenceRange, addr 0x181c5eeb0, size 0x340, virtual false, abstract: false, final false
inline void CalculateSequenceRange(::System::Xml::Schema::XmlSchemaSequence*  sequence, ::by_ref<::System::Decimal>  minOccurs, ::by_ref<::System::Decimal>  maxOccurs) ;

/// @brief Method CannonicalizeAll, addr 0x181c5f1f0, size 0x4c0, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll*  all, bool  root, bool  substitution) ;

/// @brief Method CannonicalizeChoice, addr 0x181c5f6b0, size 0x5b0, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice*  choice, bool  root, bool  substitution) ;

/// @brief Method CannonicalizeElement, addr 0x181c5fc60, size 0x150, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement*  element, bool  substitution) ;

/// @brief Method CannonicalizeGroupRef, addr 0x181c5fdb0, size 0x5a0, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef*  groupRef, bool  root, bool  substitution) ;

/// @brief Method CannonicalizeParticle, addr 0x181c60350, size 0x400, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle*  particle, bool  root, bool  substitution) ;

/// @brief Method CannonicalizeSequence, addr 0x181c60750, size 0x550, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence*  sequence, bool  root, bool  substitution) ;

/// @brief Method CheckParticleDerivation, addr 0x181c60ca0, size 0xe0, virtual false, abstract: false, final false
inline void CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CheckSubstitutionGroup, addr 0x181c60d80, size 0x1e0, virtual false, abstract: false, final false
inline void CheckSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup*  substitutionGroup) ;

/// @brief Method CheckUnionType, addr 0x181c60f60, size 0x100, virtual false, abstract: false, final false
inline void CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType*  unionMember, ::System::Collections::ArrayList*  memberTypeDefinitions, ::System::Xml::Schema::XmlSchemaSimpleType*  parentType) ;

/// @brief Method Cleanup, addr 0x181c61950, size 0xb00, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Cleanup, addr 0x181c62450, size 0x5d0, virtual false, abstract: false, final false
static inline void Cleanup(::System::Xml::Schema::XmlSchema*  schema) ;

/// @brief Method CleanupAttribute, addr 0x181c610b0, size 0x50, virtual false, abstract: false, final false
static inline void CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute*  attribute) ;

/// @brief Method CleanupAttributeGroup, addr 0x181c61060, size 0x50, virtual false, abstract: false, final false
static inline void CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup*  attributeGroup) ;

/// @brief Method CleanupAttributes, addr 0x181c61100, size 0x90, virtual false, abstract: false, final false
static inline void CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection*  attributes) ;

/// @brief Method CleanupComplexType, addr 0x181c61190, size 0x470, virtual false, abstract: false, final false
static inline void CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CleanupElement, addr 0x181c61600, size 0x180, virtual false, abstract: false, final false
static inline void CleanupElement(::System::Xml::Schema::XmlSchemaElement*  element) ;

/// @brief Method CleanupGroup, addr 0x181c61780, size 0x30, virtual false, abstract: false, final false
static inline void CleanupGroup(::System::Xml::Schema::XmlSchemaGroup*  group) ;

/// @brief Method CleanupParticle, addr 0x181c617b0, size 0x190, virtual false, abstract: false, final false
static inline void CleanupParticle(::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method CleanupSimpleType, addr 0x181c61940, size 0x10, virtual false, abstract: false, final false
static inline void CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType) ;

/// @brief Method Compile, addr 0x181c68ad0, size 0x18a0, virtual false, abstract: false, final false
inline void Compile() ;

/// @brief Method CompileAnyAttributeIntersection, addr 0x181c62a20, size 0x70, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute*  a, ::System::Xml::Schema::XmlSchemaAnyAttribute*  b) ;

/// @brief Method CompileAnyAttributeUnion, addr 0x181c62a90, size 0x70, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute*  a, ::System::Xml::Schema::XmlSchemaAnyAttribute*  b) ;

/// @brief Method CompileAttribute, addr 0x181c62ff0, size 0x850, virtual false, abstract: false, final false
inline void CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute*  xa) ;

/// @brief Method CompileAttributeGroup, addr 0x181c62b00, size 0x4f0, virtual false, abstract: false, final false
inline void CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup*  attributeGroup) ;

/// @brief Method CompileBaseMemberTypes, addr 0x181c63840, size 0x310, virtual false, abstract: false, final false
inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType) ;

/// @brief Method CompileCompexTypeElements, addr 0x181c63b50, size 0xa0, virtual false, abstract: false, final false
inline void CompileCompexTypeElements(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CompileComplexContent, addr 0x181c642a0, size 0xaa0, virtual false, abstract: false, final false
inline ::System::Xml::Schema::ContentValidator* CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CompileComplexContentExtension, addr 0x181c63bf0, size 0x3f0, virtual false, abstract: false, final false
inline void CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaComplexContentExtension*  complexExtension) ;

/// @brief Method CompileComplexContentRestriction, addr 0x181c63fe0, size 0x2c0, virtual false, abstract: false, final false
inline void CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*  complexRestriction) ;

/// @brief Method CompileComplexType, addr 0x181c64d40, size 0xb20, virtual false, abstract: false, final false
inline void CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

/// @brief Method CompileContentTypeParticle, addr 0x181c65860, size 0x150, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle*  particle, bool  substitution) ;

/// @brief Method CompileElement, addr 0x181c659b0, size 0xaf0, virtual false, abstract: false, final false
inline void CompileElement(::System::Xml::Schema::XmlSchemaElement*  xe) ;

/// @brief Method CompileGroup, addr 0x181c664a0, size 0xa0, virtual false, abstract: false, final false
inline void CompileGroup(::System::Xml::Schema::XmlSchemaGroup*  group) ;

/// @brief Method CompileIdentityConstraint, addr 0x181c66540, size 0x4e0, virtual false, abstract: false, final false
inline void CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint*  xi) ;

/// @brief Method CompileLocalAttributes, addr 0x181c66a20, size 0xcb0, virtual false, abstract: false, final false
inline void CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType*  baseType, ::System::Xml::Schema::XmlSchemaComplexType*  derivedType, ::System::Xml::Schema::XmlSchemaObjectCollection*  attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute*  anyAttribute, ::System::Xml::Schema::XmlSchemaDerivationMethod  derivedBy) ;

/// @brief Method CompileParticleElements, addr 0x181c676d0, size 0x2a0, virtual false, abstract: false, final false
inline void CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method CompileSimpleContentExtension, addr 0x181c67970, size 0x220, virtual false, abstract: false, final false
inline void CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*  simpleExtension) ;

/// @brief Method CompileSimpleContentRestriction, addr 0x181c67b90, size 0x360, virtual false, abstract: false, final false
inline void CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*  simpleRestriction) ;

/// @brief Method CompileSimpleType, addr 0x181c67ef0, size 0x760, virtual false, abstract: false, final false
inline void CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType*  simpleType) ;

/// @brief Method CompileSubstitutionGroup, addr 0x181c68650, size 0x480, virtual false, abstract: false, final false
inline void CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*  substitutionGroup) ;

/// @brief Method Execute, addr 0x181c6a370, size 0x80, virtual false, abstract: false, final false
inline bool Execute(::System::Xml::Schema::XmlSchema*  schema, ::System::Xml::Schema::SchemaInfo*  schemaInfo, bool  compileContentModel) ;

/// @brief Method GetAnySchemaType, addr 0x181c6a3f0, size 0x180, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method GetComplexType, addr 0x181c6a570, size 0x90, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method GetMappingParticle, addr 0x181c6a600, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle*  particle, ::System::Xml::Schema::XmlSchemaObjectCollection*  collection) ;

/// @brief Method GetSchemaContentType, addr 0x181c6a6d0, size 0x70, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaContentType GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType*  complexType, ::System::Xml::Schema::XmlSchemaComplexContent*  complexContent, ::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method GetSimpleType, addr 0x181c6a740, size 0x100, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method IsAnyFromAny, addr 0x181c6a840, size 0x50, virtual false, abstract: false, final false
inline bool IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny*  derivedAny, ::System::Xml::Schema::XmlSchemaAny*  baseAny) ;

/// @brief Method IsElementFromAny, addr 0x181c6a890, size 0x60, virtual false, abstract: false, final false
inline bool IsElementFromAny(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaAny*  baseAny) ;

/// @brief Method IsElementFromElement, addr 0x181c6a8f0, size 0xf0, virtual false, abstract: false, final false
inline bool IsElementFromElement(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaElement*  baseElement) ;

/// @brief Method IsElementFromGroupBase, addr 0x181c6a9e0, size 0x2f0, virtual false, abstract: false, final false
inline bool IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement*  derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase*  baseGroupBase, bool  skipEmptableOnly) ;

/// @brief Method IsGroupBaseFromAny, addr 0x181c6acd0, size 0x220, virtual false, abstract: false, final false
inline bool IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase*  derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny*  baseAny) ;

/// @brief Method IsGroupBaseFromGroupBase, addr 0x181c6aef0, size 0x270, virtual false, abstract: false, final false
inline bool IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase*  derivedGroupBase, ::System::Xml::Schema::XmlSchemaGroupBase*  baseGroupBase, bool  skipEmptableOnly) ;

/// @brief Method IsParticleEmptiable, addr 0x181c6b160, size 0x80, virtual false, abstract: false, final false
inline bool IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle*  particle) ;

/// @brief Method IsSequenceFromAll, addr 0x181c6b1e0, size 0x2f0, virtual false, abstract: false, final false
inline bool IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence*  derivedSequence, ::System::Xml::Schema::XmlSchemaAll*  baseAll) ;

/// @brief Method IsSequenceFromChoice, addr 0x181c6b4d0, size 0x210, virtual false, abstract: false, final false
inline bool IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence*  derivedSequence, ::System::Xml::Schema::XmlSchemaChoice*  baseChoice) ;

/// @brief Method IsValidOccurrenceRangeRestriction, addr 0x181c6b750, size 0x80, virtual false, abstract: false, final false
inline bool IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle*  derivedParticle, ::System::Xml::Schema::XmlSchemaParticle*  baseParticle) ;

/// @brief Method IsValidOccurrenceRangeRestriction, addr 0x181c6b6e0, size 0x70, virtual false, abstract: false, final false
inline bool IsValidOccurrenceRangeRestriction(::System::Decimal  minOccurs, ::System::Decimal  maxOccurs, ::System::Decimal  baseMinOccurs, ::System::Decimal  baseMaxOccurs) ;

/// @brief Method IsValidRestriction, addr 0x181c6b7d0, size 0xb10, virtual false, abstract: false, final false
inline bool IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle*  derivedParticle, ::System::Xml::Schema::XmlSchemaParticle*  baseParticle) ;

static inline ::System::Xml::Schema::SchemaCollectionCompiler* New_ctor(::System::Xml::XmlNameTable*  nameTable, ::System::Xml::Schema::ValidationEventHandler*  eventHandler) ;

/// @brief Method Output, addr 0x181c6c2e0, size 0xa40, virtual false, abstract: false, final false
inline void Output(::System::Xml::Schema::SchemaInfo*  schemaInfo) ;

/// @brief Method Prepare, addr 0x181c6cd20, size 0x290, virtual false, abstract: false, final false
inline void Prepare() ;

/// @brief Method PushComplexType, addr 0x181c6cfb0, size 0x20, virtual false, abstract: false, final false
inline void PushComplexType(::System::Xml::Schema::XmlSchemaComplexType*  complexType) ;

constexpr bool const& __cordl_internal_get_compileContentModel() const;

constexpr bool& __cordl_internal_get_compileContentModel() ;

constexpr ::System::Collections::Stack* const& __cordl_internal_get_complexTypeStack() const;

constexpr ::System::Collections::Stack*& __cordl_internal_get_complexTypeStack() ;

constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_examplars() const;

constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_examplars() ;

constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_schema() const;

constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schema() ;

constexpr void __cordl_internal_set_compileContentModel(bool  value) ;

constexpr void __cordl_internal_set_complexTypeStack(::System::Collections::Stack*  value) ;

constexpr void __cordl_internal_set_examplars(::System::Xml::Schema::XmlSchemaObjectTable*  value) ;

constexpr void __cordl_internal_set_schema(::System::Xml::Schema::XmlSchema*  value) ;

/// @brief Method .ctor, addr 0x181c6cfd0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlNameTable*  nameTable, ::System::Xml::Schema::ValidationEventHandler*  eventHandler) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SchemaCollectionCompiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SchemaCollectionCompiler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SchemaCollectionCompiler(SchemaCollectionCompiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SchemaCollectionCompiler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SchemaCollectionCompiler(SchemaCollectionCompiler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10074};

/// @brief Field compileContentModel, offset: 0x40, size: 0x1, def value: None
 bool  ___compileContentModel;

/// @brief Field examplars, offset: 0x48, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaObjectTable*  ___examplars;

/// @brief Field complexTypeStack, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Stack*  ___complexTypeStack;

/// @brief Field schema, offset: 0x58, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchema*  ___schema;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___compileContentModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___examplars) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___complexTypeStack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___schema) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::SchemaCollectionCompiler) == 0x60, "Size mismatch!");

} // namespace end def System::Xml::Schema
