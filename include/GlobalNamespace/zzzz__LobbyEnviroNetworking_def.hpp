#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyEnviroNetworking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyEnviroNetworking)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyEnviroNetworking;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LobbyEnviroNetworking*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LobbyEnviroNetworking*, "", "LobbyEnviroNetworking");
// Dependencies Mirror.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyEnviroNetworking
class CORDL_TYPE LobbyEnviroNetworking : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkisSimulating, put=set_NetworkisSimulating)) bool  NetworkisSimulating;

 __declspec(property(get=get_NetworksyncDate, put=set_NetworksyncDate)) int64_t  NetworksyncDate;

 __declspec(property(get=get_NetworksyncTime, put=set_NetworksyncTime)) double_t  NetworksyncTime;

/// @brief Field isSimulating, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSimulating, put=__cordl_internal_set_isSimulating)) bool  isSimulating;

/// @brief Field logVerbose, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field syncDate, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncDate, put=__cordl_internal_set_syncDate)) int64_t  syncDate;

/// @brief Field syncTime, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncTime, put=__cordl_internal_set_syncTime)) double_t  syncTime;

/// @brief Method ConvertRealLifeSecondsToEnviroSeconds, addr 0x1804235a0, size 0x60, virtual false, abstract: false, final false
static inline double_t ConvertRealLifeSecondsToEnviroSeconds(double_t  realLifeSeconds) ;

/// @brief Method DeserializeSyncVars, addr 0x180423600, size 0x120, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method GetRealLifeSeconds, addr 0x180423720, size 0x60, virtual false, abstract: false, final false
static inline double_t GetRealLifeSeconds(double_t  enviroSeconds) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::LobbyEnviroNetworking* New_ctor() ;

/// @brief Method OnStartClient, addr 0x180423780, size 0x30, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method SerializeSyncVars, addr 0x1804237b0, size 0xa0, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method Update, addr 0x180423850, size 0x4d0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_isSimulating() const;

constexpr bool& __cordl_internal_get_isSimulating() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr int64_t const& __cordl_internal_get_syncDate() const;

constexpr int64_t& __cordl_internal_get_syncDate() ;

constexpr double_t const& __cordl_internal_get_syncTime() const;

constexpr double_t& __cordl_internal_get_syncTime() ;

constexpr void __cordl_internal_set_isSimulating(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_syncDate(int64_t  value) ;

constexpr void __cordl_internal_set_syncTime(double_t  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkisSimulating, addr 0x1802e56a0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisSimulating() ;

/// @brief Method get_NetworksyncDate, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_NetworksyncDate() ;

/// @brief Method get_NetworksyncTime, addr 0x180403870, size 0x10, virtual false, abstract: false, final false
inline double_t get_NetworksyncTime() ;

/// @brief Method set_NetworkisSimulating, addr 0x180423d20, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkisSimulating(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworksyncDate, addr 0x180423db0, size 0x80, virtual false, abstract: false, final false
inline void set_NetworksyncDate(::ByRefConst<int64_t>  value) ;

/// @brief Method set_NetworksyncTime, addr 0x180423e30, size 0x80, virtual false, abstract: false, final false
inline void set_NetworksyncTime(::ByRefConst<double_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyEnviroNetworking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyEnviroNetworking", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyEnviroNetworking(LobbyEnviroNetworking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyEnviroNetworking", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyEnviroNetworking(LobbyEnviroNetworking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5184};

/// @brief Field logVerbose, offset: 0x68, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field syncTime, offset: 0x70, size: 0x8, def value: None
 double_t  ___syncTime;

/// @brief Field syncDate, offset: 0x78, size: 0x8, def value: None
 int64_t  ___syncDate;

/// @brief Field isSimulating, offset: 0x80, size: 0x1, def value: None
 bool  ___isSimulating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyEnviroNetworking, ___logVerbose) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyEnviroNetworking, ___syncTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyEnviroNetworking, ___syncDate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyEnviroNetworking, ___isSimulating) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LobbyEnviroNetworking) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
