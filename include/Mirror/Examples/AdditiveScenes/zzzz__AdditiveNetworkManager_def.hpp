#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/AdditiveNetworkManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdditiveNetworkManager)
namespace Mirror::Examples::AdditiveScenes {
class AdditiveNetworkManager__LoadSubScenes_d__10;
}
namespace Mirror::Examples::AdditiveScenes {
class AdditiveNetworkManager__UnloadScenes_d__11;
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
namespace Mirror::Examples::AdditiveScenes {
class AdditiveNetworkManager;
}
namespace Mirror::Examples::AdditiveScenes {
class AdditiveNetworkManager__LoadSubScenes_d__10;
}
namespace Mirror::Examples::AdditiveScenes {
class AdditiveNetworkManager__UnloadScenes_d__11;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager*);
MARK_REF_T(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10*);
MARK_REF_T(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager*, "Mirror.Examples.AdditiveScenes", "AdditiveNetworkManager");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10*, "Mirror.Examples.AdditiveScenes", "AdditiveNetworkManager/<LoadSubScenes>d__10");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11*, "Mirror.Examples.AdditiveScenes", "AdditiveNetworkManager/<UnloadScenes>d__11");
// Dependencies System.Object
namespace Mirror::Examples::AdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__10
class CORDL_TYPE AdditiveNetworkManager__LoadSubScenes_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>  __4__this;

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

/// @brief Method MoveNext, addr 0x1815655a0, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get___7__wrap1() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

constexpr int32_t& __cordl_internal_get___7__wrap2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>  value) ;

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
constexpr AdditiveNetworkManager__LoadSubScenes_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditiveNetworkManager__LoadSubScenes_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditiveNetworkManager__LoadSubScenes_d__10(AdditiveNetworkManager__LoadSubScenes_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditiveNetworkManager__LoadSubScenes_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditiveNetworkManager__LoadSubScenes_d__10(AdditiveNetworkManager__LoadSubScenes_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19349};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x4, def value: None
 int32_t  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveScenes
// Dependencies System.Object
namespace Mirror::Examples::AdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__11
class CORDL_TYPE AdditiveNetworkManager__UnloadScenes_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>  __4__this;

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

/// @brief Method MoveNext, addr 0x181566920, size 0x160, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get___7__wrap1() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

constexpr int32_t& __cordl_internal_get___7__wrap2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>  value) ;

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
constexpr AdditiveNetworkManager__UnloadScenes_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditiveNetworkManager__UnloadScenes_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditiveNetworkManager__UnloadScenes_d__11(AdditiveNetworkManager__UnloadScenes_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditiveNetworkManager__UnloadScenes_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditiveNetworkManager__UnloadScenes_d__11(AdditiveNetworkManager__UnloadScenes_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19350};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x4, def value: None
 int32_t  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveScenes
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::AdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveScenes.AdditiveNetworkManager
class CORDL_TYPE AdditiveNetworkManager : public ::Mirror::NetworkManager {
public:
// Declarations
using _LoadSubScenes_d__10 = ::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__LoadSubScenes_d__10;

using _UnloadScenes_d__11 = ::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager__UnloadScenes_d__11;

/// @brief Field Zone, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_Zone, put=__cordl_internal_set_Zone)) ::UnityW<::UnityEngine::GameObject>  Zone;

/// @brief Field <singleton>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton_k__BackingField, put=setStaticF__singleton_k__BackingField)) ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>  _singleton_k__BackingField;

/// @brief Field subScenes, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_subScenes, put=__cordl_internal_set_subScenes)) ::ArrayW<::StringW>  subScenes;

/// @brief Method Awake, addr 0x181553400, size 0x40, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method LoadSubScenes, addr 0x181553440, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadSubScenes() ;

static inline ::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager* New_ctor() ;

/// @brief Method OnStartServer, addr 0x181553490, size 0x60, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x1815534f0, size 0x60, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x181553550, size 0x50, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method UnloadScenes, addr 0x1815535a0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UnloadScenes() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Zone() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Zone() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_subScenes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_subScenes() ;

constexpr void __cordl_internal_set_Zone(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_subScenes(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x1804226f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager> getStaticF__singleton_k__BackingField() ;

/// @brief Method get_singleton, addr 0x1815535f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager> get_singleton() ;

static inline void setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager>  value) ;

/// @brief Method set_singleton, addr 0x181553610, size 0x30, virtual false, abstract: false, final false
static inline void set_singleton(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdditiveNetworkManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditiveNetworkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditiveNetworkManager(AdditiveNetworkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditiveNetworkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditiveNetworkManager(AdditiveNetworkManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19351};

/// @brief Field Zone, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Zone;

/// @brief Field subScenes, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___subScenes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager, ___Zone) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager, ___subScenes) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveScenes::AdditiveNetworkManager) == 0x98, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveScenes
