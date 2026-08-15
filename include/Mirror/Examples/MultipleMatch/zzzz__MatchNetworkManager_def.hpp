#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/MatchNetworkManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchNetworkManager)
namespace Mirror::Examples::MultipleMatch {
class CanvasController;
}
namespace Mirror::Examples::MultipleMatch {
class MatchNetworkManager__DoServerDisconnect_d__9;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
class MatchNetworkManager;
}
namespace Mirror::Examples::MultipleMatch {
class MatchNetworkManager__DoServerDisconnect_d__9;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleMatch::MatchNetworkManager*);
MARK_REF_T(::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::MatchNetworkManager*, "Mirror.Examples.MultipleMatch", "MatchNetworkManager");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9*, "Mirror.Examples.MultipleMatch", "MatchNetworkManager/<DoServerDisconnect>d__9");
// Dependencies System.Object
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.MatchNetworkManager/<DoServerDisconnect>d__9
class CORDL_TYPE MatchNetworkManager__DoServerDisconnect_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager>  __4__this;

/// @brief Field conn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::NetworkConnectionToClient*  conn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181565480, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_conn() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager>  value) ;

constexpr void __cordl_internal_set_conn(::Mirror::NetworkConnectionToClient*  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchNetworkManager__DoServerDisconnect_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchNetworkManager__DoServerDisconnect_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchNetworkManager__DoServerDisconnect_d__9(MatchNetworkManager__DoServerDisconnect_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchNetworkManager__DoServerDisconnect_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchNetworkManager__DoServerDisconnect_d__9(MatchNetworkManager__DoServerDisconnect_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19310};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager>  _____4__this;

/// @brief Field conn, offset: 0x28, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9, ___conn) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.MatchNetworkManager
class CORDL_TYPE MatchNetworkManager : public ::Mirror::NetworkManager {
public:
// Declarations
using _DoServerDisconnect_d__9 = ::Mirror::Examples::MultipleMatch::MatchNetworkManager__DoServerDisconnect_d__9;

/// @brief Field <singleton>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton_k__BackingField, put=setStaticF__singleton_k__BackingField)) ::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager>  _singleton_k__BackingField;

/// @brief Field canvas, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvas, put=__cordl_internal_set_canvas)) ::UnityW<::UnityEngine::GameObject>  canvas;

/// @brief Field canvasController, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvasController, put=__cordl_internal_set_canvasController)) ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  canvasController;

/// @brief Method Awake, addr 0x18155cdb0, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DoServerDisconnect, addr 0x18155ce10, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

static inline ::Mirror::Examples::MultipleMatch::MatchNetworkManager* New_ctor() ;

/// @brief Method OnClientConnect, addr 0x18155ce70, size 0x100, virtual true, abstract: false, final false
inline void OnClientConnect() ;

/// @brief Method OnClientDisconnect, addr 0x18155cf70, size 0x40, virtual true, abstract: false, final false
inline void OnClientDisconnect() ;

/// @brief Method OnServerDisconnect, addr 0x18155cfb0, size 0x70, virtual true, abstract: false, final false
inline void OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerReady, addr 0x18155d020, size 0x180, virtual true, abstract: false, final false
inline void OnServerReady(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x18155d1a0, size 0xf0, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x18155d290, size 0xc0, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x18155d350, size 0x80, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x18155d3d0, size 0xd0, virtual true, abstract: false, final false
inline void OnStopServer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_canvas() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_canvas() ;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController> const& __cordl_internal_get_canvasController() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>& __cordl_internal_get_canvasController() ;

constexpr void __cordl_internal_set_canvas(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_canvasController(::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  value) ;

/// @brief Method <>n__0, addr 0x18155d4a0, size 0x10, virtual false, abstract: false, final false
inline void __n__0(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method .ctor, addr 0x1804226f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager> getStaticF__singleton_k__BackingField() ;

/// @brief Method get_singleton, addr 0x18155d4b0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager> get_singleton() ;

static inline void setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::MultipleMatch::MatchNetworkManager>  value) ;

/// @brief Method set_singleton, addr 0x18155d4d0, size 0x30, virtual false, abstract: false, final false
static inline void set_singleton(::Mirror::Examples::MultipleMatch::MatchNetworkManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchNetworkManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchNetworkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchNetworkManager(MatchNetworkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchNetworkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchNetworkManager(MatchNetworkManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19311};

/// @brief Field canvas, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___canvas;

/// @brief Field canvasController, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  ___canvasController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchNetworkManager, ___canvas) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchNetworkManager, ___canvasController) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::MatchNetworkManager) == 0x98, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
