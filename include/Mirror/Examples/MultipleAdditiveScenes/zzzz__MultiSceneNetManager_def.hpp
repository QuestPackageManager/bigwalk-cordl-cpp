#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/MultiSceneNetManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiSceneNetManager)
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager__ClientUnloadSubScenes_d__18;
}
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager__OnServerAddPlayerDelayed_d__12;
}
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager__ServerLoadSubScenes_d__14;
}
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager__ServerUnloadSubScenes_d__16;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager;
}
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager__ClientUnloadSubScenes_d__18;
}
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager__OnServerAddPlayerDelayed_d__12;
}
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager__ServerLoadSubScenes_d__14;
}
namespace Mirror::Examples::MultipleAdditiveScenes {
class MultiSceneNetManager__ServerUnloadSubScenes_d__16;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager*);
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ClientUnloadSubScenes_d__18*);
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12*);
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14*);
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager*, "Mirror.Examples.MultipleAdditiveScenes", "MultiSceneNetManager");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ClientUnloadSubScenes_d__18*, "Mirror.Examples.MultipleAdditiveScenes", "MultiSceneNetManager/<ClientUnloadSubScenes>d__18");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12*, "Mirror.Examples.MultipleAdditiveScenes", "MultiSceneNetManager/<OnServerAddPlayerDelayed>d__12");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14*, "Mirror.Examples.MultipleAdditiveScenes", "MultiSceneNetManager/<ServerLoadSubScenes>d__14");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16*, "Mirror.Examples.MultipleAdditiveScenes", "MultiSceneNetManager/<ServerUnloadSubScenes>d__16");
// Dependencies System.Object
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__18
class CORDL_TYPE MultiSceneNetManager__ClientUnloadSubScenes_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <index>5__2, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__index_5__2, put=__cordl_internal_set__index_5__2)) int32_t  _index_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1815652d0, size 0xb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ClientUnloadSubScenes_d__18* New_ctor(int32_t  __1__state) ;

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

constexpr int32_t const& __cordl_internal_get__index_5__2() const;

constexpr int32_t& __cordl_internal_get__index_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__index_5__2(int32_t  value) ;

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
constexpr MultiSceneNetManager__ClientUnloadSubScenes_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager__ClientUnloadSubScenes_d__18", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSceneNetManager__ClientUnloadSubScenes_d__18(MultiSceneNetManager__ClientUnloadSubScenes_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager__ClientUnloadSubScenes_d__18", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSceneNetManager__ClientUnloadSubScenes_d__18(MultiSceneNetManager__ClientUnloadSubScenes_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19314};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <index>5__2, offset: 0x20, size: 0x4, def value: None
 int32_t  ____index_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ClientUnloadSubScenes_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ClientUnloadSubScenes_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ClientUnloadSubScenes_d__18, ____index_5__2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ClientUnloadSubScenes_d__18) == 0x28, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
// Dependencies System.Object
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__12
class CORDL_TYPE MultiSceneNetManager__OnServerAddPlayerDelayed_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  __4__this;

/// @brief Field conn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::NetworkConnectionToClient*  conn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181565680, size 0x300, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_conn() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  value) ;

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
constexpr MultiSceneNetManager__OnServerAddPlayerDelayed_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager__OnServerAddPlayerDelayed_d__12", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSceneNetManager__OnServerAddPlayerDelayed_d__12(MultiSceneNetManager__OnServerAddPlayerDelayed_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager__OnServerAddPlayerDelayed_d__12", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSceneNetManager__OnServerAddPlayerDelayed_d__12(MultiSceneNetManager__OnServerAddPlayerDelayed_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19315};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  _____4__this;

/// @brief Field conn, offset: 0x28, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12, ___conn) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
// Dependencies System.Object
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__14
class CORDL_TYPE MultiSceneNetManager__ServerLoadSubScenes_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  __4__this;

/// @brief Field <index>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__index_5__2, put=__cordl_internal_set__index_5__2)) int32_t  _index_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1815664e0, size 0x1a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__index_5__2() const;

constexpr int32_t& __cordl_internal_get__index_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  value) ;

constexpr void __cordl_internal_set__index_5__2(int32_t  value) ;

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
constexpr MultiSceneNetManager__ServerLoadSubScenes_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager__ServerLoadSubScenes_d__14", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSceneNetManager__ServerLoadSubScenes_d__14(MultiSceneNetManager__ServerLoadSubScenes_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager__ServerLoadSubScenes_d__14", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSceneNetManager__ServerLoadSubScenes_d__14(MultiSceneNetManager__ServerLoadSubScenes_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19316};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  _____4__this;

/// @brief Field <index>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____index_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14, ____index_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
// Dependencies System.Object
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__16
class CORDL_TYPE MultiSceneNetManager__ServerUnloadSubScenes_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  __4__this;

/// @brief Field <index>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__index_5__2, put=__cordl_internal_set__index_5__2)) int32_t  _index_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181566680, size 0x130, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__index_5__2() const;

constexpr int32_t& __cordl_internal_get__index_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  value) ;

constexpr void __cordl_internal_set__index_5__2(int32_t  value) ;

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
constexpr MultiSceneNetManager__ServerUnloadSubScenes_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager__ServerUnloadSubScenes_d__16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSceneNetManager__ServerUnloadSubScenes_d__16(MultiSceneNetManager__ServerUnloadSubScenes_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager__ServerUnloadSubScenes_d__16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSceneNetManager__ServerUnloadSubScenes_d__16(MultiSceneNetManager__ServerUnloadSubScenes_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19317};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  _____4__this;

/// @brief Field <index>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____index_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16, ____index_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager
class CORDL_TYPE MultiSceneNetManager : public ::Mirror::NetworkManager {
public:
// Declarations
using _ClientUnloadSubScenes_d__18 = ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ClientUnloadSubScenes_d__18;

using _OnServerAddPlayerDelayed_d__12 = ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__OnServerAddPlayerDelayed_d__12;

using _ServerLoadSubScenes_d__14 = ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerLoadSubScenes_d__14;

using _ServerUnloadSubScenes_d__16 = ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager__ServerUnloadSubScenes_d__16;

/// @brief Field <singleton>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton_k__BackingField, put=setStaticF__singleton_k__BackingField)) ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  _singleton_k__BackingField;

/// @brief Field clientIndex, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientIndex, put=__cordl_internal_set_clientIndex)) int32_t  clientIndex;

/// @brief Field gameScene, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameScene, put=__cordl_internal_set_gameScene)) ::StringW  gameScene;

/// @brief Field instances, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_instances, put=__cordl_internal_set_instances)) int32_t  instances;

/// @brief Field rewardPrefab, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_rewardPrefab, put=__cordl_internal_set_rewardPrefab)) ::UnityW<::UnityEngine::GameObject>  rewardPrefab;

/// @brief Field subScenes, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_subScenes, put=__cordl_internal_set_subScenes)) ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*  subScenes;

/// @brief Field subscenesLoaded, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscenesLoaded, put=__cordl_internal_set_subscenesLoaded)) bool  subscenesLoaded;

/// @brief Method Awake, addr 0x18155dca0, size 0x40, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientUnloadSubScenes, addr 0x18155dce0, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ClientUnloadSubScenes() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager* New_ctor() ;

/// @brief Method OnServerAddPlayer, addr 0x18155dd60, size 0x70, virtual true, abstract: false, final false
inline void OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerAddPlayerDelayed, addr 0x18155dd00, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OnServerAddPlayerDelayed(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartServer, addr 0x18155ddd0, size 0x50, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x18155de20, size 0x40, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x18155de60, size 0xa0, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method ServerLoadSubScenes, addr 0x18155df00, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ServerLoadSubScenes() ;

/// @brief Method ServerUnloadSubScenes, addr 0x18155df50, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ServerUnloadSubScenes() ;

constexpr int32_t const& __cordl_internal_get_clientIndex() const;

constexpr int32_t& __cordl_internal_get_clientIndex() ;

constexpr ::StringW const& __cordl_internal_get_gameScene() const;

constexpr ::StringW& __cordl_internal_get_gameScene() ;

constexpr int32_t const& __cordl_internal_get_instances() const;

constexpr int32_t& __cordl_internal_get_instances() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rewardPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rewardPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* const& __cordl_internal_get_subScenes() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*& __cordl_internal_get_subScenes() ;

constexpr bool const& __cordl_internal_get_subscenesLoaded() const;

constexpr bool& __cordl_internal_get_subscenesLoaded() ;

constexpr void __cordl_internal_set_clientIndex(int32_t  value) ;

constexpr void __cordl_internal_set_gameScene(::StringW  value) ;

constexpr void __cordl_internal_set_instances(int32_t  value) ;

constexpr void __cordl_internal_set_rewardPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_subScenes(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*  value) ;

constexpr void __cordl_internal_set_subscenesLoaded(bool  value) ;

/// @brief Method <>n__0, addr 0x181523d00, size 0x10, virtual false, abstract: false, final false
inline void __n__0(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method .ctor, addr 0x18155dfa0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager> getStaticF__singleton_k__BackingField() ;

/// @brief Method get_singleton, addr 0x18155e000, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager> get_singleton() ;

static inline void setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager>  value) ;

/// @brief Method set_singleton, addr 0x18155e020, size 0x120, virtual false, abstract: false, final false
static inline void set_singleton(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiSceneNetManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSceneNetManager(MultiSceneNetManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSceneNetManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSceneNetManager(MultiSceneNetManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19318};

/// @brief Field rewardPrefab, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rewardPrefab;

/// @brief Field instances, offset: 0x90, size: 0x4, def value: None
 int32_t  ___instances;

/// @brief Field gameScene, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___gameScene;

/// @brief Field subscenesLoaded, offset: 0xa0, size: 0x1, def value: None
 bool  ___subscenesLoaded;

/// @brief Field subScenes, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*  ___subScenes;

/// @brief Field clientIndex, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___clientIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager, ___rewardPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager, ___instances) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager, ___gameScene) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager, ___subscenesLoaded) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager, ___subScenes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager, ___clientIndex) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::MultiSceneNetManager) == 0xb8, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
