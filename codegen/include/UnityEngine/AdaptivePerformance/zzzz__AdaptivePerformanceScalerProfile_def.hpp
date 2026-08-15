#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceScalerProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerSettings_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceScalerProfile)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScaler;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerProfile;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceScalerProfile");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerProfile
class CORDL_TYPE AdaptivePerformanceScalerProfile : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings {
public:
// Declarations
 __declspec(property(get=get_AddedScalers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  AddedScalers;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field m_AddedScalers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AddedScalers, put=__cordl_internal_set_m_AddedScalers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  m_AddedScalers;

/// @brief Field m_Name, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

/// @brief Method EnableAddedScalers, addr 0x18221dd10, size 0xb0, virtual false, abstract: false, final false
inline void EnableAddedScalers() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile* New_ctor() ;

/// @brief Method RemoveAllAddedScalersFromIndexer, addr 0x18221ddc0, size 0xa0, virtual false, abstract: false, final false
inline void RemoveAllAddedScalersFromIndexer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& __cordl_internal_get_m_AddedScalers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& __cordl_internal_get_m_AddedScalers() ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr void __cordl_internal_set_m_AddedScalers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value) ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0x18221de60, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AddedScalers, addr 0x1802ec4d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* get_AddedScalers() ;

/// @brief Method get_Name, addr 0x180322750, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method set_Name, addr 0x180322770, size 0x20, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceScalerProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScalerProfile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceScalerProfile(AdaptivePerformanceScalerProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScalerProfile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceScalerProfile(AdaptivePerformanceScalerProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19432};

/// @brief Field m_AddedScalers, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  ___m_AddedScalers;

/// @brief Field m_Name, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___m_Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile, ___m_AddedScalers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile, ___m_Name) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
