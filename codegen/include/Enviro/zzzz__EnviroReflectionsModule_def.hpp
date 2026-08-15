#pragma once
// IWYU pragma private; include "Enviro/EnviroReflectionsModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroReflectionsModule)
namespace Enviro {
class EnviroReflectionProbe;
}
namespace Enviro {
class EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19;
}
namespace Enviro {
class EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22;
}
namespace Enviro {
class EnviroReflectionsModule__WaitForUnityProbe_d__21;
}
namespace Enviro {
class EnviroReflectionsModule__WaitToRefreshReflection_d__11;
}
namespace Enviro {
class EnviroReflections;
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
class Coroutine;
}
// Forward declare root types
namespace Enviro {
class EnviroReflectionsModule;
}
namespace Enviro {
class EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19;
}
namespace Enviro {
class EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22;
}
namespace Enviro {
class EnviroReflectionsModule__WaitForUnityProbe_d__21;
}
namespace Enviro {
class EnviroReflectionsModule__WaitToRefreshReflection_d__11;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroReflectionsModule*);
MARK_REF_T(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19*);
MARK_REF_T(::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22*);
MARK_REF_T(::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21*);
MARK_REF_T(::Enviro::EnviroReflectionsModule__WaitToRefreshReflection_d__11*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionsModule*, "Enviro", "EnviroReflectionsModule");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19*, "Enviro", "EnviroReflectionsModule/<CopyDefaultReflectionCustom>d__19");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22*, "Enviro", "EnviroReflectionsModule/<RenderGlobalReflectionProbeTimed>d__22");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21*, "Enviro", "EnviroReflectionsModule/<WaitForUnityProbe>d__21");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionsModule__WaitToRefreshReflection_d__11*, "Enviro", "EnviroReflectionsModule/<WaitToRefreshReflection>d__11");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionsModule/<CopyDefaultReflectionCustom>d__19
class CORDL_TYPE EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroReflectionsModule>  __4__this;

/// @brief Field <i>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field probe, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_probe, put=__cordl_internal_set_probe)) ::UnityW<::Enviro::EnviroReflectionProbe>  probe;

/// @brief Field timeslice, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_timeslice, put=__cordl_internal_set_timeslice)) bool  timeslice;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18062ab10, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroReflectionsModule> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& __cordl_internal_get_probe() const;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& __cordl_internal_get_probe() ;

constexpr bool const& __cordl_internal_get_timeslice() const;

constexpr bool& __cordl_internal_get_timeslice() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroReflectionsModule>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_probe(::UnityW<::Enviro::EnviroReflectionProbe>  value) ;

constexpr void __cordl_internal_set_timeslice(bool  value) ;

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
constexpr EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19(EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19(EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18489};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field timeslice, offset: 0x20, size: 0x1, def value: None
 bool  ___timeslice;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionsModule>  _____4__this;

/// @brief Field probe, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionProbe>  ___probe;

/// @brief Field <i>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19, ___timeslice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19, ___probe) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19, ____i_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19) == 0x40, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionsModule/<RenderGlobalReflectionProbeTimed>d__22
class CORDL_TYPE EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field probe, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_probe, put=__cordl_internal_set_probe)) ::UnityW<::Enviro::EnviroReflectionProbe>  probe;

/// @brief Field timeslice, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_timeslice, put=__cordl_internal_set_timeslice)) bool  timeslice;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18062ac50, size 0x160, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& __cordl_internal_get_probe() const;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& __cordl_internal_get_probe() ;

constexpr bool const& __cordl_internal_get_timeslice() const;

constexpr bool& __cordl_internal_get_timeslice() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_probe(::UnityW<::Enviro::EnviroReflectionProbe>  value) ;

constexpr void __cordl_internal_set_timeslice(bool  value) ;

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
constexpr EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22(EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22(EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18490};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field probe, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionProbe>  ___probe;

/// @brief Field timeslice, offset: 0x28, size: 0x1, def value: None
 bool  ___timeslice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22, ___probe) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22, ___timeslice) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22) == 0x30, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionsModule/<WaitForUnityProbe>d__21
class CORDL_TYPE EnviroReflectionsModule__WaitForUnityProbe_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroReflectionsModule>  __4__this;

/// @brief Field probe, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_probe, put=__cordl_internal_set_probe)) ::UnityW<::Enviro::EnviroReflectionProbe>  probe;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18062adb0, size 0x70, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroReflectionsModule> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& __cordl_internal_get_probe() const;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& __cordl_internal_get_probe() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroReflectionsModule>  value) ;

constexpr void __cordl_internal_set_probe(::UnityW<::Enviro::EnviroReflectionProbe>  value) ;

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
constexpr EnviroReflectionsModule__WaitForUnityProbe_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule__WaitForUnityProbe_d__21", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionsModule__WaitForUnityProbe_d__21(EnviroReflectionsModule__WaitForUnityProbe_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule__WaitForUnityProbe_d__21", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionsModule__WaitForUnityProbe_d__21(EnviroReflectionsModule__WaitForUnityProbe_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18491};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionsModule>  _____4__this;

/// @brief Field probe, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionProbe>  ___probe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21, ___probe) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21) == 0x30, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionsModule/<WaitToRefreshReflection>d__11
class CORDL_TYPE EnviroReflectionsModule__WaitToRefreshReflection_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroReflectionsModule>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18062ae20, size 0x1a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroReflectionsModule__WaitToRefreshReflection_d__11* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroReflectionsModule> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroReflectionsModule>  value) ;

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
constexpr EnviroReflectionsModule__WaitToRefreshReflection_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule__WaitToRefreshReflection_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionsModule__WaitToRefreshReflection_d__11(EnviroReflectionsModule__WaitToRefreshReflection_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule__WaitToRefreshReflection_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionsModule__WaitToRefreshReflection_d__11(EnviroReflectionsModule__WaitToRefreshReflection_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18492};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionsModule>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionsModule__WaitToRefreshReflection_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__WaitToRefreshReflection_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule__WaitToRefreshReflection_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionsModule__WaitToRefreshReflection_d__11) == 0x28, "Size mismatch!");

} // namespace end def Enviro
// Dependencies EnviroModule, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionsModule
class CORDL_TYPE EnviroReflectionsModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
using _CopyDefaultReflectionCustom_d__19 = ::Enviro::EnviroReflectionsModule__CopyDefaultReflectionCustom_d__19;

using _RenderGlobalReflectionProbeTimed_d__22 = ::Enviro::EnviroReflectionsModule__RenderGlobalReflectionProbeTimed_d__22;

using _WaitForUnityProbe_d__21 = ::Enviro::EnviroReflectionsModule__WaitForUnityProbe_d__21;

using _WaitToRefreshReflection_d__11 = ::Enviro::EnviroReflectionsModule__WaitToRefreshReflection_d__11;

/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroReflections*  Settings;

/// @brief Field copyDefaultReflectionCoroutine, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_copyDefaultReflectionCoroutine, put=__cordl_internal_set_copyDefaultReflectionCoroutine)) ::UnityEngine::Coroutine*  copyDefaultReflectionCoroutine;

/// @brief Field lastReflectionUpdate, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastReflectionUpdate, put=__cordl_internal_set_lastReflectionUpdate)) float_t  lastReflectionUpdate;

/// @brief Field lastReflectionUpdatePos, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastReflectionUpdatePos, put=__cordl_internal_set_lastReflectionUpdatePos)) ::UnityEngine::Vector3  lastReflectionUpdatePos;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroReflectionsModule>  preset;

/// @brief Field renderReflectionCoroutine, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderReflectionCoroutine, put=__cordl_internal_set_renderReflectionCoroutine)) ::UnityEngine::Coroutine*  renderReflectionCoroutine;

/// @brief Field showReflectionControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showReflectionControls, put=__cordl_internal_set_showReflectionControls)) bool  showReflectionControls;

/// @brief Field waitForProbeCoroutine, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitForProbeCoroutine, put=__cordl_internal_set_waitForProbeCoroutine)) ::UnityEngine::Coroutine*  waitForProbeCoroutine;

/// @brief Method Cleanup, addr 0x180618840, size 0x90, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method CopyDefaultReflectionCubemap, addr 0x1806188d0, size 0x270, virtual false, abstract: false, final false
inline void CopyDefaultReflectionCubemap(::Enviro::EnviroReflectionProbe*  probe) ;

/// @brief Method CopyDefaultReflectionCustom, addr 0x180618b40, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CopyDefaultReflectionCustom(::Enviro::EnviroReflectionProbe*  probe, bool  timeslice) ;

/// @brief Method CopyDefaultReflectionUnity, addr 0x180618bc0, size 0x120, virtual false, abstract: false, final false
inline void CopyDefaultReflectionUnity(::Enviro::EnviroReflectionProbe*  probe) ;

/// @brief Method Disable, addr 0x180618ce0, size 0xa0, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x180618d80, size 0x1f0, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method LoadModuleValues, addr 0x180618f70, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroReflectionsModule* New_ctor() ;

/// @brief Method RenderGlobalReflectionProbe, addr 0x180619040, size 0x120, virtual false, abstract: false, final false
inline void RenderGlobalReflectionProbe(bool  forced, bool  timeslice) ;

/// @brief Method RenderGlobalReflectionProbeTimed, addr 0x180618fe0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RenderGlobalReflectionProbeTimed(::Enviro::EnviroReflectionProbe*  probe, bool  timeslice) ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x180619160, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroReflectionsModule*  _cordl_module) ;

/// @brief Method Setup, addr 0x180619340, size 0x130, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method SetupProbeSettings, addr 0x1806191b0, size 0x190, virtual false, abstract: false, final false
inline void SetupProbeSettings(::Enviro::EnviroReflectionProbe*  probe) ;

/// @brief Method UpdateDefaultReflectionTextureMode, addr 0x180619470, size 0x80, virtual false, abstract: false, final false
inline void UpdateDefaultReflectionTextureMode() ;

/// @brief Method UpdateModule, addr 0x1806194f0, size 0x70, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdateReflection, addr 0x180619560, size 0x3a0, virtual false, abstract: false, final false
inline void UpdateReflection() ;

/// @brief Method WaitForUnityProbe, addr 0x180619900, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForUnityProbe(::Enviro::EnviroReflectionProbe*  probe) ;

/// @brief Method WaitToRefreshReflection, addr 0x180619970, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitToRefreshReflection() ;

constexpr ::Enviro::EnviroReflections* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroReflections*& __cordl_internal_get_Settings() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_copyDefaultReflectionCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_copyDefaultReflectionCoroutine() ;

constexpr float_t const& __cordl_internal_get_lastReflectionUpdate() const;

constexpr float_t& __cordl_internal_get_lastReflectionUpdate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastReflectionUpdatePos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastReflectionUpdatePos() ;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule>& __cordl_internal_get_preset() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_renderReflectionCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_renderReflectionCoroutine() ;

constexpr bool const& __cordl_internal_get_showReflectionControls() const;

constexpr bool& __cordl_internal_get_showReflectionControls() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_waitForProbeCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_waitForProbeCoroutine() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroReflections*  value) ;

constexpr void __cordl_internal_set_copyDefaultReflectionCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_lastReflectionUpdate(float_t  value) ;

constexpr void __cordl_internal_set_lastReflectionUpdatePos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroReflectionsModule>  value) ;

constexpr void __cordl_internal_set_renderReflectionCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_showReflectionControls(bool  value) ;

constexpr void __cordl_internal_set_waitForProbeCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x18060c360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroReflectionsModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionsModule(EnviroReflectionsModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionsModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionsModule(EnviroReflectionsModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18493};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroReflections*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionsModule>  ___preset;

/// @brief Field showReflectionControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showReflectionControls;

/// @brief Field lastReflectionUpdate, offset: 0x34, size: 0x4, def value: None
 float_t  ___lastReflectionUpdate;

/// @brief Field lastReflectionUpdatePos, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastReflectionUpdatePos;

/// @brief Field renderReflectionCoroutine, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___renderReflectionCoroutine;

/// @brief Field waitForProbeCoroutine, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___waitForProbeCoroutine;

/// @brief Field copyDefaultReflectionCoroutine, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___copyDefaultReflectionCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionsModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule, ___showReflectionControls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule, ___lastReflectionUpdate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule, ___lastReflectionUpdatePos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule, ___renderReflectionCoroutine) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule, ___waitForProbeCoroutine) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionsModule, ___copyDefaultReflectionCoroutine) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionsModule) == 0x60, "Size mismatch!");

} // namespace end def Enviro
