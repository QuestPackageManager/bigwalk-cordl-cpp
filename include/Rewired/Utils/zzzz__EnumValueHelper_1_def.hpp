#pragma once
// IWYU pragma private; include "Rewired/Utils/EnumValueHelper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnumValueHelper_1)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace Rewired::Utils {
template<typename TEnum>
class EnumValueHelper_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::EnumValueHelper_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::EnumValueHelper_1, "Rewired.Utils", "EnumValueHelper`1");
// Dependencies System.Object
namespace Rewired::Utils {
// cpp template
template<typename TEnum>
// Is value type: false
// CS Name: Rewired.Utils.EnumValueHelper`1<TEnum>
class CORDL_TYPE EnumValueHelper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field FcWPbYzPHnvEuTyBIDgSbgkfNmuS, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FcWPbYzPHnvEuTyBIDgSbgkfNmuS, put=__cordl_internal_set_FcWPbYzPHnvEuTyBIDgSbgkfNmuS)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  FcWPbYzPHnvEuTyBIDgSbgkfNmuS;

/// @brief Field STSDPLOOSBzmZcpwEiEwAcCCEcKB, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_STSDPLOOSBzmZcpwEiEwAcCCEcKB, put=__cordl_internal_set_STSDPLOOSBzmZcpwEiEwAcCCEcKB)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<TEnum>*  STSDPLOOSBzmZcpwEiEwAcCCEcKB;

/// @brief Field UfEaKfCsCxioKbEUGROUiiWVctYOB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UfEaKfCsCxioKbEUGROUiiWVctYOB, put=setStaticF_UfEaKfCsCxioKbEUGROUiiWVctYOB)) ::Rewired::Utils::EnumValueHelper_1<TEnum>*  UfEaKfCsCxioKbEUGROUiiWVctYOB;

/// @brief Field aShVLLnitTvQkHLniNEtyXfmkkJA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_aShVLLnitTvQkHLniNEtyXfmkkJA, put=__cordl_internal_set_aShVLLnitTvQkHLniNEtyXfmkkJA)) ::ArrayW<TEnum>  aShVLLnitTvQkHLniNEtyXfmkkJA;

/// @brief Field myTRoHCOvqlREzDoQRLnAuARBwjd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myTRoHCOvqlREzDoQRLnAuARBwjd, put=__cordl_internal_set_myTRoHCOvqlREzDoQRLnAuARBwjd)) ::ArrayW<::StringW>  myTRoHCOvqlREzDoQRLnAuARBwjd;

 __declspec(property(get=get_names)) ::System::Collections::Generic::IList_1<::StringW>*  names;

 __declspec(property(get=get_values)) ::System::Collections::Generic::IList_1<TEnum>*  values;

static inline ::Rewired::Utils::EnumValueHelper_1<TEnum>* New_ctor() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& __cordl_internal_get_FcWPbYzPHnvEuTyBIDgSbgkfNmuS() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& __cordl_internal_get_FcWPbYzPHnvEuTyBIDgSbgkfNmuS() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<TEnum>* const& __cordl_internal_get_STSDPLOOSBzmZcpwEiEwAcCCEcKB() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<TEnum>*& __cordl_internal_get_STSDPLOOSBzmZcpwEiEwAcCCEcKB() ;

constexpr ::ArrayW<TEnum> const& __cordl_internal_get_aShVLLnitTvQkHLniNEtyXfmkkJA() const;

constexpr ::ArrayW<TEnum>& __cordl_internal_get_aShVLLnitTvQkHLniNEtyXfmkkJA() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_myTRoHCOvqlREzDoQRLnAuARBwjd() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_myTRoHCOvqlREzDoQRLnAuARBwjd() ;

constexpr void __cordl_internal_set_FcWPbYzPHnvEuTyBIDgSbgkfNmuS(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_STSDPLOOSBzmZcpwEiEwAcCCEcKB(::System::Collections::ObjectModel::ReadOnlyCollection_1<TEnum>*  value) ;

constexpr void __cordl_internal_set_aShVLLnitTvQkHLniNEtyXfmkkJA(::ArrayW<TEnum>  value) ;

constexpr void __cordl_internal_set_myTRoHCOvqlREzDoQRLnAuARBwjd(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::Utils::EnumValueHelper_1<TEnum>* getStaticF_UfEaKfCsCxioKbEUGROUiiWVctYOB() ;

/// @brief Method get_Default, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::EnumValueHelper_1<TEnum>* get_Default() ;

/// @brief Method get_names, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::StringW>* get_names() ;

/// @brief Method get_values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<TEnum>* get_values() ;

static inline void setStaticF_UfEaKfCsCxioKbEUGROUiiWVctYOB(::Rewired::Utils::EnumValueHelper_1<TEnum>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumValueHelper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumValueHelper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumValueHelper_1(EnumValueHelper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumValueHelper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumValueHelper_1(EnumValueHelper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2950};

/// @brief Field aShVLLnitTvQkHLniNEtyXfmkkJA, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<TEnum>  ___aShVLLnitTvQkHLniNEtyXfmkkJA;

/// @brief Field STSDPLOOSBzmZcpwEiEwAcCCEcKB, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<TEnum>*  ___STSDPLOOSBzmZcpwEiEwAcCCEcKB;

/// @brief Field myTRoHCOvqlREzDoQRLnAuARBwjd, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___myTRoHCOvqlREzDoQRLnAuARBwjd;

/// @brief Field FcWPbYzPHnvEuTyBIDgSbgkfNmuS, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  ___FcWPbYzPHnvEuTyBIDgSbgkfNmuS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils
