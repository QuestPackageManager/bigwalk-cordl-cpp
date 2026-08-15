#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveLevels/AdditiveLevelsNetworkManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdditiveLevelsNetworkManager)
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16;
}
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager__LoadAdditive_d__12;
}
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10;
}
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager__UnloadAdditive_d__13;
}
namespace Mirror::Examples::AdditiveLevels {
class FadeInOut;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
struct SceneOperation;
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
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager;
}
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16;
}
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager__LoadAdditive_d__12;
}
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10;
}
namespace Mirror::Examples::AdditiveLevels {
class AdditiveLevelsNetworkManager__UnloadAdditive_d__13;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager*);
MARK_REF_T(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16*);
MARK_REF_T(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12*);
MARK_REF_T(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10*);
MARK_REF_T(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager*, "Mirror.Examples.AdditiveLevels", "AdditiveLevelsNetworkManager");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16*, "Mirror.Examples.AdditiveLevels", "AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__16");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12*, "Mirror.Examples.AdditiveLevels", "AdditiveLevelsNetworkManager/<LoadAdditive>d__12");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10*, "Mirror.Examples.AdditiveLevels", "AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__10");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13*, "Mirror.Examples.AdditiveLevels", "AdditiveLevelsNetworkManager/<UnloadAdditive>d__13");
// Dependencies System.Object
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__16
class CORDL_TYPE AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  __4__this;

/// @brief Field <player>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__player_5__2, put=__cordl_internal_set__player_5__2)) ::UnityW<::UnityEngine::GameObject>  _player_5__2;

/// @brief Field conn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::NetworkConnectionToClient*  conn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18156bbc0, size 0x1a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__player_5__2() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__player_5__2() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_conn() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  value) ;

constexpr void __cordl_internal_set__player_5__2(::UnityW<::UnityEngine::GameObject>  value) ;

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
constexpr AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16(AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16(AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19358};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  _____4__this;

/// @brief Field conn, offset: 0x28, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___conn;

/// @brief Field <player>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____player_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16, ___conn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16, ____player_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
// Dependencies System.Object
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__12
class CORDL_TYPE AdditiveLevelsNetworkManager__LoadAdditive_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  __4__this;

/// @brief Field sceneName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneName, put=__cordl_internal_set_sceneName)) ::StringW  sceneName;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18156bf40, size 0x250, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_sceneName() const;

constexpr ::StringW& __cordl_internal_get_sceneName() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  value) ;

constexpr void __cordl_internal_set_sceneName(::StringW  value) ;

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
constexpr AdditiveLevelsNetworkManager__LoadAdditive_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager__LoadAdditive_d__12", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditiveLevelsNetworkManager__LoadAdditive_d__12(AdditiveLevelsNetworkManager__LoadAdditive_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager__LoadAdditive_d__12", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditiveLevelsNetworkManager__LoadAdditive_d__12(AdditiveLevelsNetworkManager__LoadAdditive_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19359};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  _____4__this;

/// @brief Field sceneName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___sceneName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12, ___sceneName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
// Dependencies System.Object
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__10
class CORDL_TYPE AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::ArrayW<::StringW>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) int32_t  __7__wrap2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18156c500, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get___7__wrap1() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

constexpr int32_t& __cordl_internal_get___7__wrap2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set___7__wrap2(int32_t  value) ;

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
constexpr AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10(AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10(AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19360};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x4, def value: None
 int32_t  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
// Dependencies System.Object
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__13
class CORDL_TYPE AdditiveLevelsNetworkManager__UnloadAdditive_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  __4__this;

/// @brief Field sceneName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneName, put=__cordl_internal_set_sceneName)) ::StringW  sceneName;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18156c620, size 0x1a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_sceneName() const;

constexpr ::StringW& __cordl_internal_get_sceneName() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  value) ;

constexpr void __cordl_internal_set_sceneName(::StringW  value) ;

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
constexpr AdditiveLevelsNetworkManager__UnloadAdditive_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager__UnloadAdditive_d__13", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditiveLevelsNetworkManager__UnloadAdditive_d__13(AdditiveLevelsNetworkManager__UnloadAdditive_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager__UnloadAdditive_d__13", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditiveLevelsNetworkManager__UnloadAdditive_d__13(AdditiveLevelsNetworkManager__UnloadAdditive_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19361};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  _____4__this;

/// @brief Field sceneName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___sceneName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13, ___sceneName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager
class CORDL_TYPE AdditiveLevelsNetworkManager : public ::Mirror::NetworkManager {
public:
// Declarations
using _AddPlayerDelayed_d__16 = ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__AddPlayerDelayed_d__16;

using _LoadAdditive_d__12 = ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__LoadAdditive_d__12;

using _ServerLoadSubScenes_d__10 = ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__ServerLoadSubScenes_d__10;

using _UnloadAdditive_d__13 = ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager__UnloadAdditive_d__13;

/// @brief Field <singleton>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton_k__BackingField, put=setStaticF__singleton_k__BackingField)) ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  _singleton_k__BackingField;

/// @brief Field additiveScenes, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_additiveScenes, put=__cordl_internal_set_additiveScenes)) ::ArrayW<::StringW>  additiveScenes;

/// @brief Field fadeInOut, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeInOut, put=__cordl_internal_set_fadeInOut)) ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  fadeInOut;

/// @brief Field isInTransition, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInTransition, put=__cordl_internal_set_isInTransition)) bool  isInTransition;

/// @brief Field subscenesLoaded, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscenesLoaded, put=__cordl_internal_set_subscenesLoaded)) bool  subscenesLoaded;

/// @brief Method AddPlayerDelayed, addr 0x181566b30, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AddPlayerDelayed(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method Awake, addr 0x181566b90, size 0x40, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method LoadAdditive, addr 0x181566bd0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadAdditive(::StringW  sceneName) ;

static inline ::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager* New_ctor() ;

/// @brief Method OnClientChangeScene, addr 0x181566c30, size 0x80, virtual true, abstract: false, final false
inline void OnClientChangeScene(::StringW  sceneName, ::Mirror::SceneOperation  sceneOperation, bool  customHandling) ;

/// @brief Method OnClientSceneChanged, addr 0x181566cb0, size 0x20, virtual true, abstract: false, final false
inline void OnClientSceneChanged() ;

/// @brief Method OnServerReady, addr 0x181566cd0, size 0x90, virtual true, abstract: false, final false
inline void OnServerReady(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerSceneChanged, addr 0x181566d60, size 0x70, virtual true, abstract: false, final false
inline void OnServerSceneChanged(::StringW  sceneName) ;

/// @brief Method ServerLoadSubScenes, addr 0x181566dd0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ServerLoadSubScenes() ;

/// @brief Method UnloadAdditive, addr 0x181566e20, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UnloadAdditive(::StringW  sceneName) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_additiveScenes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_additiveScenes() ;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut> const& __cordl_internal_get_fadeInOut() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>& __cordl_internal_get_fadeInOut() ;

constexpr bool const& __cordl_internal_get_isInTransition() const;

constexpr bool& __cordl_internal_get_isInTransition() ;

constexpr bool const& __cordl_internal_get_subscenesLoaded() const;

constexpr bool& __cordl_internal_get_subscenesLoaded() ;

constexpr void __cordl_internal_set_additiveScenes(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_fadeInOut(::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  value) ;

constexpr void __cordl_internal_set_isInTransition(bool  value) ;

constexpr void __cordl_internal_set_subscenesLoaded(bool  value) ;

/// @brief Method .ctor, addr 0x1804226f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager> getStaticF__singleton_k__BackingField() ;

/// @brief Method get_singleton, addr 0x181566e80, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager> get_singleton() ;

static inline void setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager>  value) ;

/// @brief Method set_singleton, addr 0x181566ea0, size 0x30, virtual false, abstract: false, final false
static inline void set_singleton(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdditiveLevelsNetworkManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditiveLevelsNetworkManager(AdditiveLevelsNetworkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditiveLevelsNetworkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditiveLevelsNetworkManager(AdditiveLevelsNetworkManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19362};

/// @brief Field additiveScenes, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___additiveScenes;

/// @brief Field fadeInOut, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  ___fadeInOut;

/// @brief Field subscenesLoaded, offset: 0x98, size: 0x1, def value: None
 bool  ___subscenesLoaded;

/// @brief Field isInTransition, offset: 0x99, size: 0x1, def value: None
 bool  ___isInTransition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager, ___additiveScenes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager, ___fadeInOut) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager, ___subscenesLoaded) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager, ___isInTransition) == 0x99, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::AdditiveLevelsNetworkManager) == 0xa0, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
