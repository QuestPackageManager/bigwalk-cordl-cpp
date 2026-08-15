#pragma once
// IWYU pragma private; include "GlobalNamespace/MovementDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MovementDriver)
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MovementDriver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MovementDriver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MovementDriver*, "", "MovementDriver");
// Dependencies Mirror.NetworkBehaviour, PeckSystemReference
namespace GlobalNamespace {
// Is value type: false
// CS Name: MovementDriver
class CORDL_TYPE MovementDriver : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworksyncPosition, put=set_NetworksyncPosition)) float_t  NetworksyncPosition;

 __declspec(property(get=get_NetworksyncSpeed, put=set_NetworksyncSpeed)) float_t  NetworksyncSpeed;

 __declspec(property(get=get_NetworksyncTime, put=set_NetworksyncTime)) double_t  NetworksyncTime;

/// @brief Field OnUpdatePosition, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUpdatePosition, put=__cordl_internal_set_OnUpdatePosition)) ::System::Action_1<double_t>*  OnUpdatePosition;

/// @brief Field _aimSpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__aimSpeed, put=__cordl_internal_set__aimSpeed)) float_t  _aimSpeed;

/// @brief Field _localPosition, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__localPosition, put=__cordl_internal_set__localPosition)) float_t  _localPosition;

/// @brief Field _localSpeed, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__localSpeed, put=__cordl_internal_set__localSpeed)) float_t  _localSpeed;

/// @brief Field acceleration, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_acceleration, put=__cordl_internal_set_acceleration)) float_t  acceleration;

/// @brief Field activeSystem, offset 0x98, size 0x28 
 __declspec(property(get=__cordl_internal_get_activeSystem, put=__cordl_internal_set_activeSystem)) ::GlobalNamespace::PeckSystemReference  activeSystem;

/// @brief Field maxSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field occasionalPartner, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field speedSyncThreshold, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_speedSyncThreshold, put=__cordl_internal_set_speedSyncThreshold)) float_t  speedSyncThreshold;

/// @brief Field syncPosition, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_syncPosition, put=__cordl_internal_set_syncPosition)) float_t  syncPosition;

/// @brief Field syncSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_syncSpeed, put=__cordl_internal_set_syncSpeed)) float_t  syncSpeed;

/// @brief Field syncTime, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncTime, put=__cordl_internal_set_syncTime)) double_t  syncTime;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x180404910, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeSyncVars, addr 0x180404990, size 0x300, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::MovementDriver* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x180404c90, size 0x210, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method OnAnimationFocus, addr 0x180404ea0, size 0x30, virtual false, abstract: false, final false
inline void OnAnimationFocus() ;

/// @brief Method OnPeckActive, addr 0x180404ed0, size 0x70, virtual false, abstract: false, final false
inline void OnPeckActive(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method OnSetPosition, addr 0x180404ea0, size 0x30, virtual false, abstract: false, final false
inline void OnSetPosition(float_t  oldValue, float_t  newValue) ;

/// @brief Method OnSetSpeed, addr 0x180404ea0, size 0x30, virtual false, abstract: false, final false
inline void OnSetSpeed(float_t  oldValue, float_t  newValue) ;

/// @brief Method OnSetTime, addr 0x180404ea0, size 0x30, virtual false, abstract: false, final false
inline void OnSetTime(double_t  oldValue, double_t  newValue) ;

/// @brief Method SerializeSyncVars, addr 0x1804037c0, size 0xa0, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ServerSync, addr 0x180404f40, size 0x120, virtual false, abstract: false, final false
inline void ServerSync() ;

constexpr ::System::Action_1<double_t>* const& __cordl_internal_get_OnUpdatePosition() const;

constexpr ::System::Action_1<double_t>*& __cordl_internal_get_OnUpdatePosition() ;

constexpr float_t const& __cordl_internal_get__aimSpeed() const;

constexpr float_t& __cordl_internal_get__aimSpeed() ;

constexpr float_t const& __cordl_internal_get__localPosition() const;

constexpr float_t& __cordl_internal_get__localPosition() ;

constexpr float_t const& __cordl_internal_get__localSpeed() const;

constexpr float_t& __cordl_internal_get__localSpeed() ;

constexpr float_t const& __cordl_internal_get_acceleration() const;

constexpr float_t& __cordl_internal_get_acceleration() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_activeSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_activeSystem() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr float_t const& __cordl_internal_get_speedSyncThreshold() const;

constexpr float_t& __cordl_internal_get_speedSyncThreshold() ;

constexpr float_t const& __cordl_internal_get_syncPosition() const;

constexpr float_t& __cordl_internal_get_syncPosition() ;

constexpr float_t const& __cordl_internal_get_syncSpeed() const;

constexpr float_t& __cordl_internal_get_syncSpeed() ;

constexpr double_t const& __cordl_internal_get_syncTime() const;

constexpr double_t& __cordl_internal_get_syncTime() ;

constexpr void __cordl_internal_set_OnUpdatePosition(::System::Action_1<double_t>*  value) ;

constexpr void __cordl_internal_set__aimSpeed(float_t  value) ;

constexpr void __cordl_internal_set__localPosition(float_t  value) ;

constexpr void __cordl_internal_set__localSpeed(float_t  value) ;

constexpr void __cordl_internal_set_acceleration(float_t  value) ;

constexpr void __cordl_internal_set_activeSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_speedSyncThreshold(float_t  value) ;

constexpr void __cordl_internal_set_syncPosition(float_t  value) ;

constexpr void __cordl_internal_set_syncSpeed(float_t  value) ;

constexpr void __cordl_internal_set_syncTime(double_t  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworksyncPosition, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworksyncPosition() ;

/// @brief Method get_NetworksyncSpeed, addr 0x180403860, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworksyncSpeed() ;

/// @brief Method get_NetworksyncTime, addr 0x180403870, size 0x10, virtual false, abstract: false, final false
inline double_t get_NetworksyncTime() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

/// @brief Method set_NetworksyncPosition, addr 0x180405060, size 0x70, virtual false, abstract: false, final false
inline void set_NetworksyncPosition(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworksyncSpeed, addr 0x1804050d0, size 0x70, virtual false, abstract: false, final false
inline void set_NetworksyncSpeed(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworksyncTime, addr 0x180405140, size 0xd0, virtual false, abstract: false, final false
inline void set_NetworksyncTime(::ByRefConst<double_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MovementDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MovementDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MovementDriver(MovementDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MovementDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MovementDriver(MovementDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5082};

/// @brief Field syncPosition, offset: 0x68, size: 0x4, def value: None
 float_t  ___syncPosition;

/// @brief Field syncTime, offset: 0x70, size: 0x8, def value: None
 double_t  ___syncTime;

/// @brief Field syncSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___syncSpeed;

/// @brief Field maxSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field acceleration, offset: 0x80, size: 0x4, def value: None
 float_t  ___acceleration;

/// @brief Field speedSyncThreshold, offset: 0x84, size: 0x4, def value: None
 float_t  ___speedSyncThreshold;

/// @brief Field _aimSpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ____aimSpeed;

/// @brief Field _localSpeed, offset: 0x8c, size: 0x4, def value: None
 float_t  ____localSpeed;

/// @brief Field _localPosition, offset: 0x90, size: 0x4, def value: None
 float_t  ____localPosition;

/// @brief Field activeSystem, offset: 0x98, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___activeSystem;

/// @brief Field occasionalPartner, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field OnUpdatePosition, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_1<double_t>*  ___OnUpdatePosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MovementDriver, ___syncPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ___syncTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ___syncSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ___maxSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ___acceleration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ___speedSyncThreshold) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ____aimSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ____localSpeed) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ____localPosition) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ___activeSystem) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ___occasionalPartner) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovementDriver, ___OnUpdatePosition) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MovementDriver) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
