#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateActionElementMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerTemplateElementType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateActionElementMap)
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct ControllerTemplateElementTarget;
}
namespace Rewired {
struct ControllerTemplateElementType;
}
namespace Rewired {
class IControllerTemplateElementSource;
}
namespace Rewired {
class IControllerTemplate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Rewired {
class ControllerTemplateActionElementMap;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerTemplateActionElementMap*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerTemplateActionElementMap*, "Rewired", "ControllerTemplateActionElementMap");
// Dependencies Rewired.ControllerTemplateElementType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerTemplateActionElementMap
class CORDL_TYPE ControllerTemplateActionElementMap : public ::System::Object {
public:
// Declarations
/// @brief Field PVYcyFEDYMZasklnwrngnJgwWZwd, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PVYcyFEDYMZasklnwrngnJgwWZwd, put=__cordl_internal_set_PVYcyFEDYMZasklnwrngnJgwWZwd)) int32_t  PVYcyFEDYMZasklnwrngnJgwWZwd;

/// @brief Field VXJhKOQKbtXtkGOwTJGkaqMoqreK, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_VXJhKOQKbtXtkGOwTJGkaqMoqreK, put=__cordl_internal_set_VXJhKOQKbtXtkGOwTJGkaqMoqreK)) int32_t  VXJhKOQKbtXtkGOwTJGkaqMoqreK;

 __declspec(property(get=get_actionId, put=set_actionId)) int32_t  actionId;

 __declspec(property(get=get_elementIdentifierId, put=set_elementIdentifierId)) int32_t  elementIdentifierId;

 __declspec(property(get=get_elementType)) ::Rewired::ControllerTemplateElementType  elementType;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_id)) int32_t  id;

/// @brief Field jXlOpRtGiSzVexYHwwNtflyCxOHf, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_jXlOpRtGiSzVexYHwwNtflyCxOHf, put=__cordl_internal_set_jXlOpRtGiSzVexYHwwNtflyCxOHf)) bool  jXlOpRtGiSzVexYHwwNtflyCxOHf;

/// @brief Field kfAWZXwsPMqNwHqpnmmixIxGbLJu, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_kfAWZXwsPMqNwHqpnmmixIxGbLJu, put=__cordl_internal_set_kfAWZXwsPMqNwHqpnmmixIxGbLJu)) ::Rewired::ControllerTemplateElementType  kfAWZXwsPMqNwHqpnmmixIxGbLJu;

/// @brief Field nLfgDbokHPFYeAgNzIRcqGNbActj, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nLfgDbokHPFYeAgNzIRcqGNbActj, put=setStaticF_nLfgDbokHPFYeAgNzIRcqGNbActj)) int32_t  nLfgDbokHPFYeAgNzIRcqGNbActj;

/// @brief Field rZKvewePKUgxlhdWQDuYctHXOXRbb, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rZKvewePKUgxlhdWQDuYctHXOXRbb, put=__cordl_internal_set_rZKvewePKUgxlhdWQDuYctHXOXRbb)) int32_t  rZKvewePKUgxlhdWQDuYctHXOXRbb;

static inline ::Rewired::ControllerTemplateActionElementMap* New_ctor(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerTemplateActionElementMap* New_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerTemplateActionElementMap* New_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::ControllerTemplateActionElementMap* New_ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method PRbqacdyMeCJgajRxskvicnYqVur, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t PRbqacdyMeCJgajRxskvicnYqVur(::Rewired::IControllerTemplateElementSource*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method QryxqhkxSUCafEmnXjMqrjjRlvUe, addr 0x181916ff0, size 0xf0, virtual false, abstract: false, final false
inline int32_t QryxqhkxSUCafEmnXjMqrjjRlvUe(::Rewired::IControllerTemplate*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method SrVPAAGsrtSNToenMTdMbWiLuLZQ, addr 0x1819170e0, size 0x160, virtual false, abstract: false, final false
static inline ::Rewired::ControllerTemplateActionElementMap* SrVPAAGsrtSNToenMTdMbWiLuLZQ(::Rewired::ControllerTemplateElementTarget  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method SwmjbUFdJRWddzcHuzvOfjEeiSDcA, addr 0x181917240, size 0xc0, virtual false, abstract: false, final false
static inline ::Rewired::ControllerTemplateActionElementMap* SwmjbUFdJRWddzcHuzvOfjEeiSDcA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get_PVYcyFEDYMZasklnwrngnJgwWZwd() const;

constexpr int32_t& __cordl_internal_get_PVYcyFEDYMZasklnwrngnJgwWZwd() ;

constexpr int32_t const& __cordl_internal_get_VXJhKOQKbtXtkGOwTJGkaqMoqreK() const;

constexpr int32_t& __cordl_internal_get_VXJhKOQKbtXtkGOwTJGkaqMoqreK() ;

constexpr bool const& __cordl_internal_get_jXlOpRtGiSzVexYHwwNtflyCxOHf() const;

constexpr bool& __cordl_internal_get_jXlOpRtGiSzVexYHwwNtflyCxOHf() ;

constexpr ::Rewired::ControllerTemplateElementType const& __cordl_internal_get_kfAWZXwsPMqNwHqpnmmixIxGbLJu() const;

constexpr ::Rewired::ControllerTemplateElementType& __cordl_internal_get_kfAWZXwsPMqNwHqpnmmixIxGbLJu() ;

constexpr int32_t const& __cordl_internal_get_rZKvewePKUgxlhdWQDuYctHXOXRbb() const;

constexpr int32_t& __cordl_internal_get_rZKvewePKUgxlhdWQDuYctHXOXRbb() ;

constexpr void __cordl_internal_set_PVYcyFEDYMZasklnwrngnJgwWZwd(int32_t  value) ;

constexpr void __cordl_internal_set_VXJhKOQKbtXtkGOwTJGkaqMoqreK(int32_t  value) ;

constexpr void __cordl_internal_set_jXlOpRtGiSzVexYHwwNtflyCxOHf(bool  value) ;

constexpr void __cordl_internal_set_kfAWZXwsPMqNwHqpnmmixIxGbLJu(::Rewired::ControllerTemplateElementType  value) ;

constexpr void __cordl_internal_set_rZKvewePKUgxlhdWQDuYctHXOXRbb(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819173a0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181917300, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x181917360, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerTemplateElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method ezoNKJSAJaxrXsBBqLdcOUMHadtl, addr 0x181917440, size 0x140, virtual false, abstract: false, final false
static inline ::Rewired::ControllerTemplateActionElementMap* ezoNKJSAJaxrXsBBqLdcOUMHadtl(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

static inline int32_t getStaticF_nLfgDbokHPFYeAgNzIRcqGNbActj() ;

/// @brief Method get_actionId, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_actionId() ;

/// @brief Method get_elementIdentifierId, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementIdentifierId() ;

/// @brief Method get_elementType, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateElementType get_elementType() ;

/// @brief Method get_enabled, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_id, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method gwEDuuAyKvcTWMOlrVoFejGFgmLaA, addr 0x181917580, size 0x180, virtual false, abstract: false, final false
inline int32_t gwEDuuAyKvcTWMOlrVoFejGFgmLaA(::Rewired::IControllerTemplate*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method iaqItbfGmAPgDwuJFrywpscPOxaJ, addr 0x181917700, size 0x90, virtual true, abstract: false, final false
inline void iaqItbfGmAPgDwuJFrywpscPOxaJ(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jJQhQPHfnCTAzUiKHwcWnRsjUVkG, addr 0x181917790, size 0x10, virtual true, abstract: false, final false
inline void jJQhQPHfnCTAzUiKHwcWnRsjUVkG() ;

/// @brief Method rDZbSCIwNGcBIVziFJbJDOXJNQkKA, addr 0x1819177a0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject* rDZbSCIwNGcBIVziFJbJDOXJNQkKA() ;

/// @brief Method rkRkvYBdMAQTIoogmCzZhnXItUOQA, addr 0x181917810, size 0xb0, virtual true, abstract: false, final false
inline void rkRkvYBdMAQTIoogmCzZhnXItUOQA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF_nLfgDbokHPFYeAgNzIRcqGNbActj(int32_t  value) ;

/// @brief Method set_actionId, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_actionId(int32_t  value) ;

/// @brief Method set_elementIdentifierId, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_elementIdentifierId(int32_t  value) ;

/// @brief Method set_enabled, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateActionElementMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateActionElementMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateActionElementMap(ControllerTemplateActionElementMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateActionElementMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateActionElementMap(ControllerTemplateActionElementMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1869};

/// @brief Field PVYcyFEDYMZasklnwrngnJgwWZwd, offset: 0x10, size: 0x4, def value: None
 int32_t  ___PVYcyFEDYMZasklnwrngnJgwWZwd;

/// @brief Field kfAWZXwsPMqNwHqpnmmixIxGbLJu, offset: 0x14, size: 0x4, def value: None
 ::Rewired::ControllerTemplateElementType  ___kfAWZXwsPMqNwHqpnmmixIxGbLJu;

/// @brief Field jXlOpRtGiSzVexYHwwNtflyCxOHf, offset: 0x18, size: 0x1, def value: None
 bool  ___jXlOpRtGiSzVexYHwwNtflyCxOHf;

/// @brief Field rZKvewePKUgxlhdWQDuYctHXOXRbb, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___rZKvewePKUgxlhdWQDuYctHXOXRbb;

/// @brief Field VXJhKOQKbtXtkGOwTJGkaqMoqreK, offset: 0x20, size: 0x4, def value: None
 int32_t  ___VXJhKOQKbtXtkGOwTJGkaqMoqreK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerTemplateActionElementMap, ___PVYcyFEDYMZasklnwrngnJgwWZwd) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateActionElementMap, ___kfAWZXwsPMqNwHqpnmmixIxGbLJu) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateActionElementMap, ___jXlOpRtGiSzVexYHwwNtflyCxOHf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateActionElementMap, ___rZKvewePKUgxlhdWQDuYctHXOXRbb) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateActionElementMap, ___VXJhKOQKbtXtkGOwTJGkaqMoqreK) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerTemplateActionElementMap) == 0x28, "Size mismatch!");

} // namespace end def Rewired
