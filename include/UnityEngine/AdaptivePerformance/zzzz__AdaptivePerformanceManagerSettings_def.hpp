#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceManagerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptivePerformanceManagerSettings)
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
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceLoader;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceManagerSettings__InitializeLoader_d__21;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceManagerSettings;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceManagerSettings__InitializeLoader_d__21;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings*);
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceManagerSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceManagerSettings/<InitializeLoader>d__21");
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings/<InitializeLoader>d__21
class CORDL_TYPE AdaptivePerformanceManagerSettings__InitializeLoader_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  __4__this;

/// @brief Field <>s__1, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>  __s__1;

/// @brief Field <loader>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loader_5__2, put=__cordl_internal_set__loader_5__2)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>  _loader_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x182222d60, size 0x260, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x182222fc0, size 0x30, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>> const& __cordl_internal_get___s__1() const;

constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>& __cordl_internal_get___s__1() ;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader> const& __cordl_internal_get__loader_5__2() const;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>& __cordl_internal_get__loader_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  value) ;

constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>  value) ;

constexpr void __cordl_internal_set__loader_5__2(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>  value) ;

/// @brief Method <>m__Finally1, addr 0x1802ecc00, size 0x10, virtual false, abstract: false, final false
inline void __m__Finally1() ;

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
constexpr AdaptivePerformanceManagerSettings__InitializeLoader_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceManagerSettings__InitializeLoader_d__21", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceManagerSettings__InitializeLoader_d__21(AdaptivePerformanceManagerSettings__InitializeLoader_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceManagerSettings__InitializeLoader_d__21", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceManagerSettings__InitializeLoader_d__21(AdaptivePerformanceManagerSettings__InitializeLoader_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19429};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  _____4__this;

/// @brief Field <>s__1, offset: 0x28, size: 0x18, def value: None
 ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>  _____s__1;

/// @brief Field <loader>5__2, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>  ____loader_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21, _____s__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21, ____loader_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings
class CORDL_TYPE AdaptivePerformanceManagerSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using _InitializeLoader_d__21 = ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings__InitializeLoader_d__21;

 __declspec(property(get=get_activeLoader, put=set_activeLoader)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>  activeLoader;

 __declspec(property(get=get_automaticLoading, put=set_automaticLoading)) bool  automaticLoading;

 __declspec(property(get=get_automaticRunning, put=set_automaticRunning)) bool  automaticRunning;

 __declspec(property(get=get_isInitializationComplete)) bool  isInitializationComplete;

 __declspec(property(get=get_loaders, put=set_loaders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>*  loaders;

/// @brief Field m_AutomaticLoading, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutomaticLoading, put=__cordl_internal_set_m_AutomaticLoading)) bool  m_AutomaticLoading;

/// @brief Field m_AutomaticRunning, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutomaticRunning, put=__cordl_internal_set_m_AutomaticRunning)) bool  m_AutomaticRunning;

/// @brief Field m_InitializationComplete, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InitializationComplete, put=__cordl_internal_set_m_InitializationComplete)) bool  m_InitializationComplete;

/// @brief Field m_Loaders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Loaders, put=__cordl_internal_set_m_Loaders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>*  m_Loaders;

/// @brief Field s_ActiveLoader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ActiveLoader, put=setStaticF_s_ActiveLoader)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>  s_ActiveLoader;

/// @brief Method ActiveLoaderAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T ActiveLoaderAs() ;

/// @brief Method DeinitializeLoader, addr 0x182218910, size 0xe0, virtual false, abstract: false, final false
inline void DeinitializeLoader() ;

/// @brief Method InitializeLoader, addr 0x182218b30, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* InitializeLoader() ;

/// @brief Method InitializeLoaderSync, addr 0x1822189f0, size 0x140, virtual false, abstract: false, final false
inline void InitializeLoaderSync() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182218b80, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x182218b90, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method StartSubsystems, addr 0x182218c00, size 0x70, virtual false, abstract: false, final false
inline void StartSubsystems() ;

/// @brief Method StopSubsystems, addr 0x182218c70, size 0x70, virtual false, abstract: false, final false
inline void StopSubsystems() ;

constexpr bool const& __cordl_internal_get_m_AutomaticLoading() const;

constexpr bool& __cordl_internal_get_m_AutomaticLoading() ;

constexpr bool const& __cordl_internal_get_m_AutomaticRunning() const;

constexpr bool& __cordl_internal_get_m_AutomaticRunning() ;

constexpr bool const& __cordl_internal_get_m_InitializationComplete() const;

constexpr bool& __cordl_internal_get_m_InitializationComplete() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>* const& __cordl_internal_get_m_Loaders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>*& __cordl_internal_get_m_Loaders() ;

constexpr void __cordl_internal_set_m_AutomaticLoading(bool  value) ;

constexpr void __cordl_internal_set_m_AutomaticRunning(bool  value) ;

constexpr void __cordl_internal_set_m_InitializationComplete(bool  value) ;

constexpr void __cordl_internal_set_m_Loaders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>*  value) ;

/// @brief Method .ctor, addr 0x182218ce0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader> getStaticF_s_ActiveLoader() ;

/// @brief Method get_activeLoader, addr 0x182218d40, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader> get_activeLoader() ;

/// @brief Method get_automaticLoading, addr 0x1814f8710, size 0x10, virtual false, abstract: false, final false
inline bool get_automaticLoading() ;

/// @brief Method get_automaticRunning, addr 0x1805c5560, size 0x10, virtual false, abstract: false, final false
inline bool get_automaticRunning() ;

/// @brief Method get_isInitializationComplete, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_isInitializationComplete() ;

/// @brief Method get_loaders, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>* get_loaders() ;

static inline void setStaticF_s_ActiveLoader(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>  value) ;

/// @brief Method set_activeLoader, addr 0x182218d60, size 0x30, virtual false, abstract: false, final false
inline void set_activeLoader(::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader*  value) ;

/// @brief Method set_automaticLoading, addr 0x1818376c0, size 0x10, virtual false, abstract: false, final false
inline void set_automaticLoading(bool  value) ;

/// @brief Method set_automaticRunning, addr 0x1805c55e0, size 0x10, virtual false, abstract: false, final false
inline void set_automaticRunning(bool  value) ;

/// @brief Method set_loaders, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_loaders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceManagerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceManagerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceManagerSettings(AdaptivePerformanceManagerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceManagerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceManagerSettings(AdaptivePerformanceManagerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19430};

/// @brief Field m_InitializationComplete, offset: 0x18, size: 0x1, def value: None
 bool  ___m_InitializationComplete;

/// @brief Field m_AutomaticLoading, offset: 0x19, size: 0x1, def value: None
 bool  ___m_AutomaticLoading;

/// @brief Field m_AutomaticRunning, offset: 0x1a, size: 0x1, def value: None
 bool  ___m_AutomaticRunning;

/// @brief Field m_Loaders, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceLoader>>*  ___m_Loaders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings, ___m_InitializationComplete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings, ___m_AutomaticLoading) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings, ___m_AutomaticRunning) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings, ___m_Loaders) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
