#pragma once
// IWYU pragma private; include "Rewired/Internal/Localization/DeviceLocalizationInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/Data/zzzz__Bytes20_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceLocalizationInfo)
namespace Rewired::Utils::Classes::Data {
struct Bytes20;
}
namespace Rewired::Utils::Classes::Data {
template<typename T>
class ReadOnlyList_1;
}
namespace Rewired {
struct ControllerType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired::Internal::Localization {
class DeviceLocalizationInfo;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::Localization::DeviceLocalizationInfo*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::Localization::DeviceLocalizationInfo*, "Rewired.Internal.Localization", "DeviceLocalizationInfo");
// Dependencies Rewired.ControllerType, Rewired.Utils.Classes.Data.Bytes20, System.Guid, System.Object
namespace Rewired::Internal::Localization {
// Is value type: false
// CS Name: Rewired.Internal.Localization.DeviceLocalizationInfo
class CORDL_TYPE DeviceLocalizationInfo : public ::System::Object {
public:
// Declarations
/// @brief Field ZZfgOWkuMRlkkbpRXDHSVynCqFNo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZZfgOWkuMRlkkbpRXDHSVynCqFNo, put=__cordl_internal_set_ZZfgOWkuMRlkkbpRXDHSVynCqFNo)) ::System::Collections::Generic::IList_1<::StringW>*  ZZfgOWkuMRlkkbpRXDHSVynCqFNo;

 __declspec(property(get=get_additionalIdentifyingInformation, put=set_additionalIdentifyingInformation)) ::StringW  additionalIdentifyingInformation;

/// @brief Field bElXhQjbMCNIwNkacdhgSpzZsQlw, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_bElXhQjbMCNIwNkacdhgSpzZsQlw, put=__cordl_internal_set_bElXhQjbMCNIwNkacdhgSpzZsQlw)) ::StringW  bElXhQjbMCNIwNkacdhgSpzZsQlw;

 __declspec(property(get=get_controllerTemplateGuids)) ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>*  controllerTemplateGuids;

/// @brief Field controllerType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_controllerType, put=__cordl_internal_set_controllerType)) ::Rewired::ControllerType  controllerType;

/// @brief Field guid, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_guid, put=__cordl_internal_set_guid)) ::System::Guid  guid;

/// @brief Field hDJXCuoeTEcXFQgauNHlObOuzeUR, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hDJXCuoeTEcXFQgauNHlObOuzeUR, put=__cordl_internal_set_hDJXCuoeTEcXFQgauNHlObOuzeUR)) ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>*  hDJXCuoeTEcXFQgauNHlObOuzeUR;

 __declspec(property(get=get_hash)) ::Rewired::Utils::Classes::Data::Bytes20  hash;

/// @brief Field isControllerTemplate, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isControllerTemplate, put=__cordl_internal_set_isControllerTemplate)) bool  isControllerTemplate;

/// @brief Field laIqNQKUeubrkASDBBflTCxnYQcf, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_laIqNQKUeubrkASDBBflTCxnYQcf, put=__cordl_internal_set_laIqNQKUeubrkASDBBflTCxnYQcf)) bool  laIqNQKUeubrkASDBBflTCxnYQcf;

/// @brief Field mVJijGxtEaiABRxkPEnwLYAsNQtv, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_mVJijGxtEaiABRxkPEnwLYAsNQtv, put=__cordl_internal_set_mVJijGxtEaiABRxkPEnwLYAsNQtv)) ::Rewired::Utils::Classes::Data::Bytes20  mVJijGxtEaiABRxkPEnwLYAsNQtv;

/// @brief Field pLreiWwtdkJoDnpyYbEwxmGEtBxi, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pLreiWwtdkJoDnpyYbEwxmGEtBxi, put=__cordl_internal_set_pLreiWwtdkJoDnpyYbEwxmGEtBxi)) ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>*  pLreiWwtdkJoDnpyYbEwxmGEtBxi;

 __declspec(property(get=get_parentKeys)) ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>*  parentKeys;

/// @brief Method ComputeHash, addr 0x1818f0cc0, size 0x250, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::Bytes20 ComputeHash() ;

/// @brief Method DataMatches, addr 0x1818f0f10, size 0x220, virtual false, abstract: false, final false
static inline bool DataMatches(::Rewired::Internal::Localization::DeviceLocalizationInfo*  a, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  b) ;

/// @brief Method FinishRuntimeSetup, addr 0x1818f1130, size 0x30, virtual false, abstract: false, final false
inline void FinishRuntimeSetup() ;

/// @brief Method InsertParentKey, addr 0x1818f1160, size 0x80, virtual false, abstract: false, final false
inline void InsertParentKey(int32_t  index, ::StringW  key) ;

static inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* New_ctor() ;

static inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* New_ctor(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::IList_1<::StringW>*  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::IList_1<::System::Guid>*  _cordl_fixed_empty_name_whitespace_param_4) ;

static inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* New_ctor(::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Collections::Generic::IList_1<::StringW>* const& __cordl_internal_get_ZZfgOWkuMRlkkbpRXDHSVynCqFNo() const;

constexpr ::System::Collections::Generic::IList_1<::StringW>*& __cordl_internal_get_ZZfgOWkuMRlkkbpRXDHSVynCqFNo() ;

constexpr ::StringW const& __cordl_internal_get_bElXhQjbMCNIwNkacdhgSpzZsQlw() const;

constexpr ::StringW& __cordl_internal_get_bElXhQjbMCNIwNkacdhgSpzZsQlw() ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get_controllerType() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get_controllerType() ;

constexpr ::System::Guid const& __cordl_internal_get_guid() const;

constexpr ::System::Guid& __cordl_internal_get_guid() ;

constexpr ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>* const& __cordl_internal_get_hDJXCuoeTEcXFQgauNHlObOuzeUR() const;

constexpr ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>*& __cordl_internal_get_hDJXCuoeTEcXFQgauNHlObOuzeUR() ;

constexpr bool const& __cordl_internal_get_isControllerTemplate() const;

constexpr bool& __cordl_internal_get_isControllerTemplate() ;

constexpr bool const& __cordl_internal_get_laIqNQKUeubrkASDBBflTCxnYQcf() const;

constexpr bool& __cordl_internal_get_laIqNQKUeubrkASDBBflTCxnYQcf() ;

constexpr ::Rewired::Utils::Classes::Data::Bytes20 const& __cordl_internal_get_mVJijGxtEaiABRxkPEnwLYAsNQtv() const;

constexpr ::Rewired::Utils::Classes::Data::Bytes20& __cordl_internal_get_mVJijGxtEaiABRxkPEnwLYAsNQtv() ;

constexpr ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>* const& __cordl_internal_get_pLreiWwtdkJoDnpyYbEwxmGEtBxi() const;

constexpr ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>*& __cordl_internal_get_pLreiWwtdkJoDnpyYbEwxmGEtBxi() ;

constexpr void __cordl_internal_set_ZZfgOWkuMRlkkbpRXDHSVynCqFNo(::System::Collections::Generic::IList_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_bElXhQjbMCNIwNkacdhgSpzZsQlw(::StringW  value) ;

constexpr void __cordl_internal_set_controllerType(::Rewired::ControllerType  value) ;

constexpr void __cordl_internal_set_guid(::System::Guid  value) ;

constexpr void __cordl_internal_set_hDJXCuoeTEcXFQgauNHlObOuzeUR(::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>*  value) ;

constexpr void __cordl_internal_set_isControllerTemplate(bool  value) ;

constexpr void __cordl_internal_set_laIqNQKUeubrkASDBBflTCxnYQcf(bool  value) ;

constexpr void __cordl_internal_set_mVJijGxtEaiABRxkPEnwLYAsNQtv(::Rewired::Utils::Classes::Data::Bytes20  value) ;

constexpr void __cordl_internal_set_pLreiWwtdkJoDnpyYbEwxmGEtBxi(::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1818f1310, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818f1390, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::IList_1<::StringW>*  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::IList_1<::System::Guid>*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method .ctor, addr 0x1818f11e0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_additionalIdentifyingInformation, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_additionalIdentifyingInformation() ;

/// @brief Method get_controllerTemplateGuids, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>* get_controllerTemplateGuids() ;

/// @brief Method get_hash, addr 0x1818f1470, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::Bytes20 get_hash() ;

/// @brief Method get_parentKeys, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>* get_parentKeys() ;

/// @brief Method hlVgYYVKzFQRmIFcvkBxeihQBMHZ, addr 0x1818f1490, size 0x10, virtual false, abstract: false, final false
inline void hlVgYYVKzFQRmIFcvkBxeihQBMHZ() ;

/// @brief Method rYIjJAPklfGbOmlAmCHgGGGjRWIN, addr 0x1818f14a0, size 0x30, virtual false, abstract: false, final false
inline void rYIjJAPklfGbOmlAmCHgGGGjRWIN() ;

/// @brief Method set_additionalIdentifyingInformation, addr 0x1818f14d0, size 0x30, virtual false, abstract: false, final false
inline void set_additionalIdentifyingInformation(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceLocalizationInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceLocalizationInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceLocalizationInfo(DeviceLocalizationInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceLocalizationInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceLocalizationInfo(DeviceLocalizationInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2831};

/// @brief Field guid, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___guid;

/// @brief Field controllerType, offset: 0x20, size: 0x4, def value: None
 ::Rewired::ControllerType  ___controllerType;

/// @brief Field isControllerTemplate, offset: 0x24, size: 0x1, def value: None
 bool  ___isControllerTemplate;

/// @brief Field pLreiWwtdkJoDnpyYbEwxmGEtBxi, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>*  ___pLreiWwtdkJoDnpyYbEwxmGEtBxi;

/// @brief Field ZZfgOWkuMRlkkbpRXDHSVynCqFNo, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::StringW>*  ___ZZfgOWkuMRlkkbpRXDHSVynCqFNo;

/// @brief Field hDJXCuoeTEcXFQgauNHlObOuzeUR, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>*  ___hDJXCuoeTEcXFQgauNHlObOuzeUR;

/// @brief Field bElXhQjbMCNIwNkacdhgSpzZsQlw, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___bElXhQjbMCNIwNkacdhgSpzZsQlw;

/// @brief Field mVJijGxtEaiABRxkPEnwLYAsNQtv, offset: 0x48, size: 0x18, def value: None
 ::Rewired::Utils::Classes::Data::Bytes20  ___mVJijGxtEaiABRxkPEnwLYAsNQtv;

/// @brief Field laIqNQKUeubrkASDBBflTCxnYQcf, offset: 0x60, size: 0x1, def value: None
 bool  ___laIqNQKUeubrkASDBBflTCxnYQcf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___guid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___controllerType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___isControllerTemplate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___pLreiWwtdkJoDnpyYbEwxmGEtBxi) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___ZZfgOWkuMRlkkbpRXDHSVynCqFNo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___hDJXCuoeTEcXFQgauNHlObOuzeUR) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___bElXhQjbMCNIwNkacdhgSpzZsQlw) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___mVJijGxtEaiABRxkPEnwLYAsNQtv) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::DeviceLocalizationInfo, ___laIqNQKUeubrkASDBBflTCxnYQcf) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Internal::Localization::DeviceLocalizationInfo) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Internal::Localization
