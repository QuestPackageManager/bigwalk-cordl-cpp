#pragma once
// IWYU pragma private; include "Mirror/DistanceInterestManagement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__InterestManagement_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DistanceInterestManagement)
namespace Mirror {
class DistanceInterestManagementCustomRange;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkIdentity;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Mirror {
class DistanceInterestManagement;
}
// Write type traits
MARK_REF_T(::Mirror::DistanceInterestManagement*);
DEFINE_IL2CPP_CLASS(::Mirror::DistanceInterestManagement*, "Mirror", "DistanceInterestManagement");
// Dependencies Mirror.InterestManagement
namespace Mirror {
// Is value type: false
// CS Name: Mirror.DistanceInterestManagement
class CORDL_TYPE DistanceInterestManagement : public ::Mirror::InterestManagement {
public:
// Declarations
/// @brief Field CustomRanges, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomRanges, put=__cordl_internal_set_CustomRanges)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::DistanceInterestManagementCustomRange>>*  CustomRanges;

/// @brief Field lastRebuildTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRebuildTime, put=__cordl_internal_set_lastRebuildTime)) double_t  lastRebuildTime;

/// @brief Field rebuildInterval, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rebuildInterval, put=__cordl_internal_set_rebuildInterval)) float_t  rebuildInterval;

/// @brief Field visRange, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_visRange, put=__cordl_internal_set_visRange)) int32_t  visRange;

/// @brief Method GetVisRange, addr 0x181517e10, size 0xa0, virtual false, abstract: false, final false
inline int32_t GetVisRange(::Mirror::NetworkIdentity*  identity) ;

static inline ::Mirror::DistanceInterestManagement* New_ctor() ;

/// @brief Method OnCheckObserver, addr 0x181517eb0, size 0xf0, virtual true, abstract: false, final false
inline bool OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver) ;

/// @brief Method OnDestroyed, addr 0x181517fa0, size 0x30, virtual true, abstract: false, final false
inline void OnDestroyed(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method OnRebuildObservers, addr 0x181517fd0, size 0x200, virtual true, abstract: false, final false
inline void OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers) ;

/// @brief Method OnSpawned, addr 0x1815181d0, size 0x70, virtual true, abstract: false, final false
inline void OnSpawned(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method Reset, addr 0x181518240, size 0x60, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0x1815182a0, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::DistanceInterestManagementCustomRange>>* const& __cordl_internal_get_CustomRanges() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::DistanceInterestManagementCustomRange>>*& __cordl_internal_get_CustomRanges() ;

constexpr double_t const& __cordl_internal_get_lastRebuildTime() const;

constexpr double_t& __cordl_internal_get_lastRebuildTime() ;

constexpr float_t const& __cordl_internal_get_rebuildInterval() const;

constexpr float_t& __cordl_internal_get_rebuildInterval() ;

constexpr int32_t const& __cordl_internal_get_visRange() const;

constexpr int32_t& __cordl_internal_get_visRange() ;

constexpr void __cordl_internal_set_CustomRanges(::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::DistanceInterestManagementCustomRange>>*  value) ;

constexpr void __cordl_internal_set_lastRebuildTime(double_t  value) ;

constexpr void __cordl_internal_set_rebuildInterval(float_t  value) ;

constexpr void __cordl_internal_set_visRange(int32_t  value) ;

/// @brief Method .ctor, addr 0x181518310, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistanceInterestManagement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistanceInterestManagement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DistanceInterestManagement(DistanceInterestManagement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistanceInterestManagement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistanceInterestManagement(DistanceInterestManagement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19225};

/// @brief Field visRange, offset: 0x28, size: 0x4, def value: None
 int32_t  ___visRange;

/// @brief Field rebuildInterval, offset: 0x2c, size: 0x4, def value: None
 float_t  ___rebuildInterval;

/// @brief Field lastRebuildTime, offset: 0x30, size: 0x8, def value: None
 double_t  ___lastRebuildTime;

/// @brief Field CustomRanges, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::DistanceInterestManagementCustomRange>>*  ___CustomRanges;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::DistanceInterestManagement, ___visRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::DistanceInterestManagement, ___rebuildInterval) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Mirror::DistanceInterestManagement, ___lastRebuildTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::DistanceInterestManagement, ___CustomRanges) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::DistanceInterestManagement) == 0x40, "Size mismatch!");

} // namespace end def Mirror
