#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateMap)
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
class ControllerTemplateActionElementMap;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class IControllerTemplate;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class ControllerTemplateMap;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerTemplateMap*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerTemplateMap*, "Rewired", "ControllerTemplateMap");
// Dependencies System.Guid, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerTemplateMap
class CORDL_TYPE ControllerTemplateMap : public ::System::Object {
public:
// Declarations
/// @brief Field DYYcitoamAQEjfUDvfCiTPoONaoe, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_DYYcitoamAQEjfUDvfCiTPoONaoe, put=__cordl_internal_set_DYYcitoamAQEjfUDvfCiTPoONaoe)) int32_t  DYYcitoamAQEjfUDvfCiTPoONaoe;

 __declspec(property(get=get_ElementMaps)) ::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateActionElementMap*>*  ElementMaps;

/// @brief Field JrZHoyimSWcifJMnKVYFBFTNtfzVA, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_JrZHoyimSWcifJMnKVYFBFTNtfzVA, put=__cordl_internal_set_JrZHoyimSWcifJMnKVYFBFTNtfzVA)) bool  JrZHoyimSWcifJMnKVYFBFTNtfzVA;

/// @brief Field KnCbPZWigDWQPUyJRDMsCrHdGulL, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_KnCbPZWigDWQPUyJRDMsCrHdGulL, put=__cordl_internal_set_KnCbPZWigDWQPUyJRDMsCrHdGulL)) int32_t  KnCbPZWigDWQPUyJRDMsCrHdGulL;

/// @brief Field LvwlYepqnWomrjkhPMsFgSxdvudE, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_LvwlYepqnWomrjkhPMsFgSxdvudE, put=__cordl_internal_set_LvwlYepqnWomrjkhPMsFgSxdvudE)) int32_t  LvwlYepqnWomrjkhPMsFgSxdvudE;

/// @brief Field RAYuHDFMguASjrVWaDRShimHcmtT, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RAYuHDFMguASjrVWaDRShimHcmtT, put=__cordl_internal_set_RAYuHDFMguASjrVWaDRShimHcmtT)) int32_t  RAYuHDFMguASjrVWaDRShimHcmtT;

 __declspec(property(get=get_categoryId, put=qGNCiOhlDRRMgcpHIRHrRORkpUIkb)) int32_t  categoryId;

/// @brief Field dXFcoopQoBrsNHvAjFBFkxmSlDrv, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dXFcoopQoBrsNHvAjFBFkxmSlDrv, put=__cordl_internal_set_dXFcoopQoBrsNHvAjFBFkxmSlDrv)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerTemplateActionElementMap*>*  dXFcoopQoBrsNHvAjFBFkxmSlDrv;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

/// @brief Field fVpEpoKUcsYkzDNXrpguRVelpxkV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_fVpEpoKUcsYkzDNXrpguRVelpxkV, put=setStaticF_fVpEpoKUcsYkzDNXrpguRVelpxkV)) int32_t  fVpEpoKUcsYkzDNXrpguRVelpxkV;

/// @brief Field hJZDWVxRSdppIIiVZDnNdDJDdeaHb, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_hJZDWVxRSdppIIiVZDnNdDJDdeaHb, put=__cordl_internal_set_hJZDWVxRSdppIIiVZDnNdDJDdeaHb)) ::System::Guid  hJZDWVxRSdppIIiVZDnNdDJDdeaHb;

 __declspec(property(get=get_id)) int32_t  id;

 __declspec(property(get=get_layoutId, put=syiwnphHXqSPKGzmZybeWLOsrJcb)) int32_t  layoutId;

/// @brief Field nlxSGuXYvHsyyrvctofcihkwSwYd, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_nlxSGuXYvHsyyrvctofcihkwSwYd, put=__cordl_internal_set_nlxSGuXYvHsyyrvctofcihkwSwYd)) int32_t  nlxSGuXYvHsyyrvctofcihkwSwYd;

 __declspec(property(get=get_templateTypeGuid)) ::System::Guid  templateTypeGuid;

/// @brief Field ylGqOtkYGlHYtQjuzEsjLOzLImYs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ylGqOtkYGlHYtQjuzEsjLOzLImYs, put=__cordl_internal_set_ylGqOtkYGlHYtQjuzEsjLOzLImYs)) ::System::Collections::Generic::List_1<::Rewired::ControllerTemplateActionElementMap*>*  ylGqOtkYGlHYtQjuzEsjLOzLImYs;

/// @brief Method EyDJOyETKHWdwHjbHsDjHSmgXDZJ, addr 0x181917be0, size 0x5c0, virtual true, abstract: false, final false
inline void EyDJOyETKHWdwHjbHsDjHSmgXDZJ(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method FromJson, addr 0x1819181a0, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::ControllerTemplateMap* FromJson(::StringW  jsonString) ;

/// @brief Method FromXml, addr 0x181918230, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::ControllerTemplateMap* FromXml(::StringW  xmlString) ;

/// @brief Method KjMdIkenKbmqACMqbyynCoFQYYcec, addr 0x1819182c0, size 0xb0, virtual false, abstract: false, final false
static inline ::Rewired::ControllerTemplateMap* KjMdIkenKbmqACMqbyynCoFQYYcec(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerTemplateMap* New_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerTemplateMap* New_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method QhjEauJQbknmEyBsmSaMiNQhQrwV, addr 0x181918370, size 0x230, virtual true, abstract: false, final false
inline void QhjEauJQbknmEyBsmSaMiNQhQrwV(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ToControllerMap, addr 0x1819185a0, size 0x270, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* ToControllerMap(::Rewired::Controller*  controller) ;

/// @brief Method ToJsonString, addr 0x181918810, size 0x170, virtual false, abstract: false, final false
inline ::StringW ToJsonString() ;

/// @brief Method ToXmlString, addr 0x181918980, size 0x170, virtual false, abstract: false, final false
inline ::StringW ToXmlString() ;

constexpr int32_t const& __cordl_internal_get_DYYcitoamAQEjfUDvfCiTPoONaoe() const;

constexpr int32_t& __cordl_internal_get_DYYcitoamAQEjfUDvfCiTPoONaoe() ;

constexpr bool const& __cordl_internal_get_JrZHoyimSWcifJMnKVYFBFTNtfzVA() const;

constexpr bool& __cordl_internal_get_JrZHoyimSWcifJMnKVYFBFTNtfzVA() ;

constexpr int32_t const& __cordl_internal_get_KnCbPZWigDWQPUyJRDMsCrHdGulL() const;

constexpr int32_t& __cordl_internal_get_KnCbPZWigDWQPUyJRDMsCrHdGulL() ;

constexpr int32_t const& __cordl_internal_get_LvwlYepqnWomrjkhPMsFgSxdvudE() const;

constexpr int32_t& __cordl_internal_get_LvwlYepqnWomrjkhPMsFgSxdvudE() ;

constexpr int32_t const& __cordl_internal_get_RAYuHDFMguASjrVWaDRShimHcmtT() const;

constexpr int32_t& __cordl_internal_get_RAYuHDFMguASjrVWaDRShimHcmtT() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerTemplateActionElementMap*>* const& __cordl_internal_get_dXFcoopQoBrsNHvAjFBFkxmSlDrv() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerTemplateActionElementMap*>*& __cordl_internal_get_dXFcoopQoBrsNHvAjFBFkxmSlDrv() ;

constexpr ::System::Guid const& __cordl_internal_get_hJZDWVxRSdppIIiVZDnNdDJDdeaHb() const;

constexpr ::System::Guid& __cordl_internal_get_hJZDWVxRSdppIIiVZDnNdDJDdeaHb() ;

constexpr int32_t const& __cordl_internal_get_nlxSGuXYvHsyyrvctofcihkwSwYd() const;

constexpr int32_t& __cordl_internal_get_nlxSGuXYvHsyyrvctofcihkwSwYd() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerTemplateActionElementMap*>* const& __cordl_internal_get_ylGqOtkYGlHYtQjuzEsjLOzLImYs() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerTemplateActionElementMap*>*& __cordl_internal_get_ylGqOtkYGlHYtQjuzEsjLOzLImYs() ;

constexpr void __cordl_internal_set_DYYcitoamAQEjfUDvfCiTPoONaoe(int32_t  value) ;

constexpr void __cordl_internal_set_JrZHoyimSWcifJMnKVYFBFTNtfzVA(bool  value) ;

constexpr void __cordl_internal_set_KnCbPZWigDWQPUyJRDMsCrHdGulL(int32_t  value) ;

constexpr void __cordl_internal_set_LvwlYepqnWomrjkhPMsFgSxdvudE(int32_t  value) ;

constexpr void __cordl_internal_set_RAYuHDFMguASjrVWaDRShimHcmtT(int32_t  value) ;

constexpr void __cordl_internal_set_dXFcoopQoBrsNHvAjFBFkxmSlDrv(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerTemplateActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_hJZDWVxRSdppIIiVZDnNdDJDdeaHb(::System::Guid  value) ;

constexpr void __cordl_internal_set_nlxSGuXYvHsyyrvctofcihkwSwYd(int32_t  value) ;

constexpr void __cordl_internal_set_ylGqOtkYGlHYtQjuzEsjLOzLImYs(::System::Collections::Generic::List_1<::Rewired::ControllerTemplateActionElementMap*>*  value) ;

/// @brief Method .ctor, addr 0x181918af0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181918be0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

static inline int32_t getStaticF_fVpEpoKUcsYkzDNXrpguRVelpxkV() ;

/// @brief Method get_ElementMaps, addr 0x181918c30, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateActionElementMap*>* get_ElementMaps() ;

/// @brief Method get_categoryId, addr 0x181918c90, size 0x60, virtual false, abstract: false, final false
inline int32_t get_categoryId() ;

/// @brief Method get_enabled, addr 0x181918cf0, size 0x60, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_id, addr 0x181918d50, size 0x60, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_layoutId, addr 0x181918db0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_layoutId() ;

/// @brief Method get_templateTypeGuid, addr 0x181918e10, size 0x90, virtual false, abstract: false, final false
inline ::System::Guid get_templateTypeGuid() ;

/// @brief Method iVKOLoICGAqFStvifSfmyNaAnzgL, addr 0x181918ea0, size 0x50, virtual false, abstract: false, final false
inline void iVKOLoICGAqFStvifSfmyNaAnzgL() ;

/// @brief Method obShRQucfJcHamppAZVubMkqCyjp, addr 0x1819177a0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject* obShRQucfJcHamppAZVubMkqCyjp() ;

/// @brief Method qGNCiOhlDRRMgcpHIRHrRORkpUIkb, addr 0x180323270, size 0x10, virtual false, abstract: false, final false
inline void qGNCiOhlDRRMgcpHIRHrRORkpUIkb(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF_fVpEpoKUcsYkzDNXrpguRVelpxkV(int32_t  value) ;

/// @brief Method set_enabled, addr 0x180323260, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method syiwnphHXqSPKGzmZybeWLOsrJcb, addr 0x180511530, size 0x10, virtual false, abstract: false, final false
inline void syiwnphHXqSPKGzmZybeWLOsrJcb(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method veuinzcdqEfXClFubFAQGBqwsybRA, addr 0x181918ef0, size 0x520, virtual false, abstract: false, final false
static inline ::Rewired::ControllerTemplateMap* veuinzcdqEfXClFubFAQGBqwsybRA(::Rewired::IControllerTemplate*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method zPzeaCgToxzKkOBXPSFMAVxTJYQxA, addr 0x181919410, size 0x70, virtual false, abstract: false, final false
inline void zPzeaCgToxzKkOBXPSFMAVxTJYQxA(::Rewired::ControllerTemplateActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateMap(ControllerTemplateMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateMap(ControllerTemplateMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1898};

/// @brief Field DYYcitoamAQEjfUDvfCiTPoONaoe, offset: 0x10, size: 0x4, def value: None
 int32_t  ___DYYcitoamAQEjfUDvfCiTPoONaoe;

/// @brief Field nlxSGuXYvHsyyrvctofcihkwSwYd, offset: 0x14, size: 0x4, def value: None
 int32_t  ___nlxSGuXYvHsyyrvctofcihkwSwYd;

/// @brief Field hJZDWVxRSdppIIiVZDnNdDJDdeaHb, offset: 0x18, size: 0x10, def value: None
 ::System::Guid  ___hJZDWVxRSdppIIiVZDnNdDJDdeaHb;

/// @brief Field ylGqOtkYGlHYtQjuzEsjLOzLImYs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::ControllerTemplateActionElementMap*>*  ___ylGqOtkYGlHYtQjuzEsjLOzLImYs;

/// @brief Field dXFcoopQoBrsNHvAjFBFkxmSlDrv, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerTemplateActionElementMap*>*  ___dXFcoopQoBrsNHvAjFBFkxmSlDrv;

/// @brief Field JrZHoyimSWcifJMnKVYFBFTNtfzVA, offset: 0x38, size: 0x1, def value: None
 bool  ___JrZHoyimSWcifJMnKVYFBFTNtfzVA;

/// @brief Field RAYuHDFMguASjrVWaDRShimHcmtT, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___RAYuHDFMguASjrVWaDRShimHcmtT;

/// @brief Field KnCbPZWigDWQPUyJRDMsCrHdGulL, offset: 0x40, size: 0x4, def value: None
 int32_t  ___KnCbPZWigDWQPUyJRDMsCrHdGulL;

/// @brief Field LvwlYepqnWomrjkhPMsFgSxdvudE, offset: 0x44, size: 0x4, def value: None
 int32_t  ___LvwlYepqnWomrjkhPMsFgSxdvudE;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerTemplateMap, ___DYYcitoamAQEjfUDvfCiTPoONaoe) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateMap, ___nlxSGuXYvHsyyrvctofcihkwSwYd) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateMap, ___hJZDWVxRSdppIIiVZDnNdDJDdeaHb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateMap, ___ylGqOtkYGlHYtQjuzEsjLOzLImYs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateMap, ___dXFcoopQoBrsNHvAjFBFkxmSlDrv) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateMap, ___JrZHoyimSWcifJMnKVYFBFTNtfzVA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateMap, ___RAYuHDFMguASjrVWaDRShimHcmtT) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateMap, ___KnCbPZWigDWQPUyJRDMsCrHdGulL) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateMap, ___LvwlYepqnWomrjkhPMsFgSxdvudE) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerTemplateMap) == 0x48, "Size mismatch!");

} // namespace end def Rewired
