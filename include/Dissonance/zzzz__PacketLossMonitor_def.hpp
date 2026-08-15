#pragma once
// IWYU pragma private; include "Dissonance/PacketLossMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketLossMonitor)
namespace Dissonance {
class VoicePlayerState;
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
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance {
class PacketLossMonitor;
}
// Write type traits
MARK_REF_T(::Dissonance::PacketLossMonitor*);
DEFINE_IL2CPP_CLASS(::Dissonance::PacketLossMonitor*, "Dissonance", "PacketLossMonitor");
// Dependencies System.DateTime, System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.PacketLossMonitor
class CORDL_TYPE PacketLossMonitor : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PacketLoss, put=set_PacketLoss)) float_t  PacketLoss;

/// @brief Field <PacketLoss>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__PacketLoss_k__BackingField, put=__cordl_internal_set__PacketLoss_k__BackingField)) float_t  _PacketLoss_k__BackingField;

/// @brief Field _lastUpdatedPacketLoss, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastUpdatedPacketLoss, put=__cordl_internal_set__lastUpdatedPacketLoss)) ::System::DateTime  _lastUpdatedPacketLoss;

/// @brief Field _lastUpdatedPlayerCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdatedPlayerCount, put=__cordl_internal_set__lastUpdatedPlayerCount)) int32_t  _lastUpdatedPlayerCount;

/// @brief Field _players, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  _players;

/// @brief Field _tmpLossValues, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpLossValues, put=__cordl_internal_set__tmpLossValues)) ::System::Collections::Generic::List_1<float_t>*  _tmpLossValues;

/// @brief Method CalculatePacketLoss, addr 0x1805cc890, size 0x1f0, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> CalculatePacketLoss() ;

/// @brief Method CheckCount, addr 0x1805cca80, size 0x30, virtual false, abstract: false, final false
inline bool CheckCount() ;

/// @brief Method CheckTime, addr 0x1805ccab0, size 0x40, virtual false, abstract: false, final false
inline bool CheckTime(::System::DateTime  now) ;

static inline ::Dissonance::PacketLossMonitor* New_ctor(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  players) ;

/// @brief Method Update, addr 0x1805ccaf0, size 0xe0, virtual false, abstract: false, final false
inline void Update(::System::Nullable_1<::System::DateTime>  utcNow) ;

constexpr float_t const& __cordl_internal_get__PacketLoss_k__BackingField() const;

constexpr float_t& __cordl_internal_get__PacketLoss_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastUpdatedPacketLoss() const;

constexpr ::System::DateTime& __cordl_internal_get__lastUpdatedPacketLoss() ;

constexpr int32_t const& __cordl_internal_get__lastUpdatedPlayerCount() const;

constexpr int32_t& __cordl_internal_get__lastUpdatedPlayerCount() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get__players() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get__players() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__tmpLossValues() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__tmpLossValues() ;

constexpr void __cordl_internal_set__PacketLoss_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__lastUpdatedPacketLoss(::System::DateTime  value) ;

constexpr void __cordl_internal_set__lastUpdatedPlayerCount(int32_t  value) ;

constexpr void __cordl_internal_set__players(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set__tmpLossValues(::System::Collections::Generic::List_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x1805ccbd0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  players) ;

/// @brief Method get_PacketLoss, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_PacketLoss() ;

/// @brief Method set_PacketLoss, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_PacketLoss(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PacketLossMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PacketLossMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PacketLossMonitor(PacketLossMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PacketLossMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PacketLossMonitor(PacketLossMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16815};

/// @brief Field _players, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  ____players;

/// @brief Field _lastUpdatedPacketLoss, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____lastUpdatedPacketLoss;

/// @brief Field _lastUpdatedPlayerCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ____lastUpdatedPlayerCount;

/// @brief Field _tmpLossValues, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ____tmpLossValues;

/// @brief Field <PacketLoss>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____PacketLoss_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::PacketLossMonitor, ____players) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PacketLossMonitor, ____lastUpdatedPacketLoss) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PacketLossMonitor, ____lastUpdatedPlayerCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PacketLossMonitor, ____tmpLossValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PacketLossMonitor, ____PacketLoss_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Dissonance::PacketLossMonitor) == 0x38, "Size mismatch!");

} // namespace end def Dissonance
