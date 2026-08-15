#pragma once
// IWYU pragma private; include "Mirror/Examples/Pong/NetworkManagerPong.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkManagerPong)
namespace Mirror::Examples::Pong {
class NetworkManagerPong___c;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Mirror::Examples::Pong {
class NetworkManagerPong;
}
namespace Mirror::Examples::Pong {
class NetworkManagerPong___c;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Pong::NetworkManagerPong*);
MARK_REF_T(::Mirror::Examples::Pong::NetworkManagerPong___c*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Pong::NetworkManagerPong*, "Mirror.Examples.Pong", "NetworkManagerPong");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Pong::NetworkManagerPong___c*, "Mirror.Examples.Pong", "NetworkManagerPong/<>c");
// Dependencies System.Object
namespace Mirror::Examples::Pong {
// Is value type: false
// CS Name: Mirror.Examples.Pong.NetworkManagerPong/<>c
class CORDL_TYPE NetworkManagerPong___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::Examples::Pong::NetworkManagerPong___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  __9__3_0;

static inline ::Mirror::Examples::Pong::NetworkManagerPong___c* New_ctor() ;

/// @brief Method <OnServerAddPlayer>b__3_0, addr 0x1815667b0, size 0x40, virtual false, abstract: false, final false
inline bool _OnServerAddPlayer_b__3_0(::UnityEngine::GameObject*  prefab) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::Examples::Pong::NetworkManagerPong___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Mirror::Examples::Pong::NetworkManagerPong___c*  value) ;

static inline void setStaticF___9__3_0(::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkManagerPong___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkManagerPong___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkManagerPong___c(NetworkManagerPong___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkManagerPong___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkManagerPong___c(NetworkManagerPong___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19291};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::Pong::NetworkManagerPong___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Examples::Pong
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::Pong {
// Is value type: false
// CS Name: Mirror.Examples.Pong.NetworkManagerPong
class CORDL_TYPE NetworkManagerPong : public ::Mirror::NetworkManager {
public:
// Declarations
using __c = ::Mirror::Examples::Pong::NetworkManagerPong___c;

/// @brief Field ball, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ball, put=__cordl_internal_set_ball)) ::UnityW<::UnityEngine::GameObject>  ball;

/// @brief Field leftRacketSpawn, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftRacketSpawn, put=__cordl_internal_set_leftRacketSpawn)) ::UnityW<::UnityEngine::Transform>  leftRacketSpawn;

/// @brief Field rightRacketSpawn, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightRacketSpawn, put=__cordl_internal_set_rightRacketSpawn)) ::UnityW<::UnityEngine::Transform>  rightRacketSpawn;

static inline ::Mirror::Examples::Pong::NetworkManagerPong* New_ctor() ;

/// @brief Method OnServerAddPlayer, addr 0x18155e140, size 0x1b0, virtual true, abstract: false, final false
inline void OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerDisconnect, addr 0x18155e2f0, size 0x50, virtual true, abstract: false, final false
inline void OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ball() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ball() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftRacketSpawn() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftRacketSpawn() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightRacketSpawn() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightRacketSpawn() ;

constexpr void __cordl_internal_set_ball(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leftRacketSpawn(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightRacketSpawn(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1804226f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkManagerPong() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkManagerPong", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkManagerPong(NetworkManagerPong && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkManagerPong", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkManagerPong(NetworkManagerPong const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19292};

/// @brief Field leftRacketSpawn, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftRacketSpawn;

/// @brief Field rightRacketSpawn, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightRacketSpawn;

/// @brief Field ball, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ball;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Pong::NetworkManagerPong, ___leftRacketSpawn) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Pong::NetworkManagerPong, ___rightRacketSpawn) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Pong::NetworkManagerPong, ___ball) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Pong::NetworkManagerPong) == 0xa0, "Size mismatch!");

} // namespace end def Mirror::Examples::Pong
