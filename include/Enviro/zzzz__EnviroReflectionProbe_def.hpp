#pragma once
// IWYU pragma private; include "Enviro/EnviroReflectionProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroReflectionProbe)
namespace Enviro {
class EnviroReflectionProbe__RefreshFirstTime_d__34;
}
namespace Enviro {
class EnviroReflectionProbe__RefreshInstant_d__36;
}
namespace Enviro {
class EnviroReflectionProbe__RefreshOvertime_d__37;
}
namespace Enviro {
class EnviroReflectionProbe__RefreshUnity_d__35;
}
namespace Enviro {
class EnviroRenderer;
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
class Camera;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class ReflectionProbe;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Enviro {
class EnviroReflectionProbe;
}
namespace Enviro {
class EnviroReflectionProbe__RefreshFirstTime_d__34;
}
namespace Enviro {
class EnviroReflectionProbe__RefreshInstant_d__36;
}
namespace Enviro {
class EnviroReflectionProbe__RefreshOvertime_d__37;
}
namespace Enviro {
class EnviroReflectionProbe__RefreshUnity_d__35;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroReflectionProbe*);
MARK_REF_T(::Enviro::EnviroReflectionProbe__RefreshFirstTime_d__34*);
MARK_REF_T(::Enviro::EnviroReflectionProbe__RefreshInstant_d__36*);
MARK_REF_T(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37*);
MARK_REF_T(::Enviro::EnviroReflectionProbe__RefreshUnity_d__35*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionProbe*, "Enviro", "EnviroReflectionProbe");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionProbe__RefreshFirstTime_d__34*, "Enviro", "EnviroReflectionProbe/<RefreshFirstTime>d__34");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionProbe__RefreshInstant_d__36*, "Enviro", "EnviroReflectionProbe/<RefreshInstant>d__36");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37*, "Enviro", "EnviroReflectionProbe/<RefreshOvertime>d__37");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflectionProbe__RefreshUnity_d__35*, "Enviro", "EnviroReflectionProbe/<RefreshUnity>d__35");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionProbe/<RefreshFirstTime>d__34
class CORDL_TYPE EnviroReflectionProbe__RefreshFirstTime_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroReflectionProbe>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061bae0, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroReflectionProbe__RefreshFirstTime_d__34* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroReflectionProbe>  value) ;

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
constexpr EnviroReflectionProbe__RefreshFirstTime_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe__RefreshFirstTime_d__34", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionProbe__RefreshFirstTime_d__34(EnviroReflectionProbe__RefreshFirstTime_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe__RefreshFirstTime_d__34", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionProbe__RefreshFirstTime_d__34(EnviroReflectionProbe__RefreshFirstTime_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18482};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionProbe>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshFirstTime_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshFirstTime_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshFirstTime_d__34, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionProbe__RefreshFirstTime_d__34) == 0x28, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionProbe/<RefreshInstant>d__36
class CORDL_TYPE EnviroReflectionProbe__RefreshInstant_d__36 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroReflectionProbe>  __4__this;

/// @brief Field mirrorTex, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mirrorTex, put=__cordl_internal_set_mirrorTex)) ::UnityW<::UnityEngine::RenderTexture>  mirrorTex;

/// @brief Field renderTex, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderTex, put=__cordl_internal_set_renderTex)) ::UnityW<::UnityEngine::RenderTexture>  renderTex;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061bb70, size 0x1c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroReflectionProbe__RefreshInstant_d__36* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_mirrorTex() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_mirrorTex() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_renderTex() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_renderTex() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroReflectionProbe>  value) ;

constexpr void __cordl_internal_set_mirrorTex(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_renderTex(::UnityW<::UnityEngine::RenderTexture>  value) ;

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
constexpr EnviroReflectionProbe__RefreshInstant_d__36() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe__RefreshInstant_d__36", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionProbe__RefreshInstant_d__36(EnviroReflectionProbe__RefreshInstant_d__36 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe__RefreshInstant_d__36", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionProbe__RefreshInstant_d__36(EnviroReflectionProbe__RefreshInstant_d__36 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18483};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionProbe>  _____4__this;

/// @brief Field mirrorTex, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___mirrorTex;

/// @brief Field renderTex, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___renderTex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshInstant_d__36, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshInstant_d__36, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshInstant_d__36, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshInstant_d__36, ___mirrorTex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshInstant_d__36, ___renderTex) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionProbe__RefreshInstant_d__36) == 0x38, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionProbe/<RefreshOvertime>d__37
class CORDL_TYPE EnviroReflectionProbe__RefreshOvertime_d__37 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroReflectionProbe>  __4__this;

/// @brief Field <face>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__face_5__2, put=__cordl_internal_set__face_5__2)) int32_t  _face_5__2;

/// @brief Field mirrorTex, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mirrorTex, put=__cordl_internal_set_mirrorTex)) ::UnityW<::UnityEngine::RenderTexture>  mirrorTex;

/// @brief Field renderTex, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderTex, put=__cordl_internal_set_renderTex)) ::UnityW<::UnityEngine::RenderTexture>  renderTex;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061bd30, size 0x1b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__face_5__2() const;

constexpr int32_t& __cordl_internal_get__face_5__2() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_mirrorTex() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_mirrorTex() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_renderTex() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_renderTex() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroReflectionProbe>  value) ;

constexpr void __cordl_internal_set__face_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_mirrorTex(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_renderTex(::UnityW<::UnityEngine::RenderTexture>  value) ;

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
constexpr EnviroReflectionProbe__RefreshOvertime_d__37() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe__RefreshOvertime_d__37", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionProbe__RefreshOvertime_d__37(EnviroReflectionProbe__RefreshOvertime_d__37 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe__RefreshOvertime_d__37", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionProbe__RefreshOvertime_d__37(EnviroReflectionProbe__RefreshOvertime_d__37 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18484};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionProbe>  _____4__this;

/// @brief Field mirrorTex, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___mirrorTex;

/// @brief Field renderTex, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___renderTex;

/// @brief Field <face>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  ____face_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37, ___mirrorTex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37, ___renderTex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37, ____face_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37) == 0x40, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionProbe/<RefreshUnity>d__35
class CORDL_TYPE EnviroReflectionProbe__RefreshUnity_d__35 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroReflectionProbe>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061bee0, size 0x80, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroReflectionProbe__RefreshUnity_d__35* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroReflectionProbe>  value) ;

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
constexpr EnviroReflectionProbe__RefreshUnity_d__35() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe__RefreshUnity_d__35", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionProbe__RefreshUnity_d__35(EnviroReflectionProbe__RefreshUnity_d__35 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe__RefreshUnity_d__35", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionProbe__RefreshUnity_d__35(EnviroReflectionProbe__RefreshUnity_d__35 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18485};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionProbe>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshUnity_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshUnity_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe__RefreshUnity_d__35, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionProbe__RefreshUnity_d__35) == 0x28, "Size mismatch!");

} // namespace end def Enviro
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflectionProbe
class CORDL_TYPE EnviroReflectionProbe : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RefreshFirstTime_d__34 = ::Enviro::EnviroReflectionProbe__RefreshFirstTime_d__34;

using _RefreshInstant_d__36 = ::Enviro::EnviroReflectionProbe__RefreshInstant_d__36;

using _RefreshOvertime_d__37 = ::Enviro::EnviroReflectionProbe__RefreshOvertime_d__37;

using _RefreshUnity_d__35 = ::Enviro::EnviroReflectionProbe__RefreshUnity_d__35;

/// @brief Field bakeMat, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakeMat, put=__cordl_internal_set_bakeMat)) ::UnityW<::UnityEngine::Material>  bakeMat;

/// @brief Field bakingCam, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakingCam, put=__cordl_internal_set_bakingCam)) ::UnityW<::UnityEngine::Camera>  bakingCam;

/// @brief Field convolutionMat, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_convolutionMat, put=__cordl_internal_set_convolutionMat)) ::UnityW<::UnityEngine::Material>  convolutionMat;

/// @brief Field cubemap, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_cubemap, put=__cordl_internal_set_cubemap)) ::UnityW<::UnityEngine::RenderTexture>  cubemap;

/// @brief Field currentMode, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentMode, put=__cordl_internal_set_currentMode)) bool  currentMode;

/// @brief Field currentRes, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRes, put=__cordl_internal_set_currentRes)) int32_t  currentRes;

/// @brief Field customRendering, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_customRendering, put=__cordl_internal_set_customRendering)) bool  customRendering;

/// @brief Field enviroRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_enviroRenderer, put=__cordl_internal_set_enviroRenderer)) ::UnityW<::Enviro::EnviroRenderer>  enviroRenderer;

/// @brief Field finalCubemap, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_finalCubemap, put=__cordl_internal_set_finalCubemap)) ::UnityW<::UnityEngine::RenderTexture>  finalCubemap;

/// @brief Field lastRelfectionUpdate, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRelfectionUpdate, put=__cordl_internal_set_lastRelfectionUpdate)) double_t  lastRelfectionUpdate;

/// @brief Field mirror, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_mirror, put=__cordl_internal_set_mirror)) ::UnityW<::UnityEngine::Material>  mirror;

/// @brief Field mirrorTexture, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_mirrorTexture, put=__cordl_internal_set_mirrorTexture)) ::UnityW<::UnityEngine::RenderTexture>  mirrorTexture;

/// @brief Field myProbe, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myProbe, put=__cordl_internal_set_myProbe)) ::UnityW<::UnityEngine::ReflectionProbe>  myProbe;

/// @brief Field orientations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_orientations, put=setStaticF_orientations)) ::ArrayW<::UnityEngine::Quaternion>  orientations;

/// @brief Field reflectionsUpdateTreshhold, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_reflectionsUpdateTreshhold, put=__cordl_internal_set_reflectionsUpdateTreshhold)) float_t  reflectionsUpdateTreshhold;

/// @brief Field refreshing, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_refreshing, put=__cordl_internal_set_refreshing)) ::UnityEngine::Coroutine*  refreshing;

/// @brief Field renderCam, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderCam, put=__cordl_internal_set_renderCam)) ::UnityW<::UnityEngine::Camera>  renderCam;

/// @brief Field renderCamObj, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderCamObj, put=__cordl_internal_set_renderCamObj)) ::UnityW<::UnityEngine::GameObject>  renderCamObj;

/// @brief Field renderID, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderID, put=__cordl_internal_set_renderID)) int32_t  renderID;

/// @brief Field renderId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderId, put=__cordl_internal_set_renderId)) int32_t  renderId;

/// @brief Field renderTexture, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderTexture, put=__cordl_internal_set_renderTexture)) ::UnityW<::UnityEngine::RenderTexture>  renderTexture;

/// @brief Field standalone, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_standalone, put=__cordl_internal_set_standalone)) bool  standalone;

/// @brief Field updateReflectionOnGameTime, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateReflectionOnGameTime, put=__cordl_internal_set_updateReflectionOnGameTime)) bool  updateReflectionOnGameTime;

/// @brief Field useFog, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_useFog, put=__cordl_internal_set_useFog)) bool  useFog;

/// @brief Field useTimeSlicing, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTimeSlicing, put=__cordl_internal_set_useTimeSlicing)) bool  useTimeSlicing;

/// @brief Method BakeCubemapFace, addr 0x180616830, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> BakeCubemapFace(int32_t  face, int32_t  res) ;

/// @brief Method Cleanup, addr 0x180616a00, size 0xf0, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method ClearTextures, addr 0x180616af0, size 0x80, virtual false, abstract: false, final false
inline void ClearTextures() ;

/// @brief Method ConvolutionCubemap, addr 0x180616b70, size 0x750, virtual false, abstract: false, final false
inline void ConvolutionCubemap() ;

/// @brief Method CreateBakingCamera, addr 0x1806172c0, size 0x200, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> CreateBakingCamera() ;

/// @brief Method CreateCubemap, addr 0x1806174c0, size 0x2b0, virtual false, abstract: false, final false
inline void CreateCubemap() ;

/// @brief Method CreateRenderCamera, addr 0x180617770, size 0x2a0, virtual false, abstract: false, final false
inline void CreateRenderCamera() ;

/// @brief Method CreateTexturesAndMaterial, addr 0x180617a10, size 0x390, virtual false, abstract: false, final false
inline void CreateTexturesAndMaterial() ;

static inline ::Enviro::EnviroReflectionProbe* New_ctor() ;

/// @brief Method OnDisable, addr 0x180617da0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180617df0, size 0x1d0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshFirstTime, addr 0x180617fc0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RefreshFirstTime() ;

/// @brief Method RefreshInstant, addr 0x180618010, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RefreshInstant(::UnityEngine::RenderTexture*  renderTex, ::UnityEngine::RenderTexture*  mirrorTex) ;

/// @brief Method RefreshOvertime, addr 0x180618090, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RefreshOvertime(::UnityEngine::RenderTexture*  renderTex, ::UnityEngine::RenderTexture*  mirrorTex) ;

/// @brief Method RefreshReflection, addr 0x180618110, size 0x260, virtual false, abstract: false, final false
inline void RefreshReflection(bool  timeSlice) ;

/// @brief Method RefreshUnity, addr 0x180618370, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RefreshUnity() ;

/// @brief Method Update, addr 0x180618500, size 0x110, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCameraSettings, addr 0x1806183c0, size 0x70, virtual false, abstract: false, final false
inline void UpdateCameraSettings() ;

/// @brief Method UpdateStandaloneReflection, addr 0x180618430, size 0xd0, virtual false, abstract: false, final false
inline void UpdateStandaloneReflection() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bakeMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bakeMat() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_bakingCam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_bakingCam() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_convolutionMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_convolutionMat() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_cubemap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_cubemap() ;

constexpr bool const& __cordl_internal_get_currentMode() const;

constexpr bool& __cordl_internal_get_currentMode() ;

constexpr int32_t const& __cordl_internal_get_currentRes() const;

constexpr int32_t& __cordl_internal_get_currentRes() ;

constexpr bool const& __cordl_internal_get_customRendering() const;

constexpr bool& __cordl_internal_get_customRendering() ;

constexpr ::UnityW<::Enviro::EnviroRenderer> const& __cordl_internal_get_enviroRenderer() const;

constexpr ::UnityW<::Enviro::EnviroRenderer>& __cordl_internal_get_enviroRenderer() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_finalCubemap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_finalCubemap() ;

constexpr double_t const& __cordl_internal_get_lastRelfectionUpdate() const;

constexpr double_t& __cordl_internal_get_lastRelfectionUpdate() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mirror() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mirror() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_mirrorTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_mirrorTexture() ;

constexpr ::UnityW<::UnityEngine::ReflectionProbe> const& __cordl_internal_get_myProbe() const;

constexpr ::UnityW<::UnityEngine::ReflectionProbe>& __cordl_internal_get_myProbe() ;

constexpr float_t const& __cordl_internal_get_reflectionsUpdateTreshhold() const;

constexpr float_t& __cordl_internal_get_reflectionsUpdateTreshhold() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_refreshing() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_refreshing() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_renderCam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_renderCam() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_renderCamObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_renderCamObj() ;

constexpr int32_t const& __cordl_internal_get_renderID() const;

constexpr int32_t& __cordl_internal_get_renderID() ;

constexpr int32_t const& __cordl_internal_get_renderId() const;

constexpr int32_t& __cordl_internal_get_renderId() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_renderTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_renderTexture() ;

constexpr bool const& __cordl_internal_get_standalone() const;

constexpr bool& __cordl_internal_get_standalone() ;

constexpr bool const& __cordl_internal_get_updateReflectionOnGameTime() const;

constexpr bool& __cordl_internal_get_updateReflectionOnGameTime() ;

constexpr bool const& __cordl_internal_get_useFog() const;

constexpr bool& __cordl_internal_get_useFog() ;

constexpr bool const& __cordl_internal_get_useTimeSlicing() const;

constexpr bool& __cordl_internal_get_useTimeSlicing() ;

constexpr void __cordl_internal_set_bakeMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_bakingCam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_convolutionMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_cubemap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_currentMode(bool  value) ;

constexpr void __cordl_internal_set_currentRes(int32_t  value) ;

constexpr void __cordl_internal_set_customRendering(bool  value) ;

constexpr void __cordl_internal_set_enviroRenderer(::UnityW<::Enviro::EnviroRenderer>  value) ;

constexpr void __cordl_internal_set_finalCubemap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_lastRelfectionUpdate(double_t  value) ;

constexpr void __cordl_internal_set_mirror(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_mirrorTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_myProbe(::UnityW<::UnityEngine::ReflectionProbe>  value) ;

constexpr void __cordl_internal_set_reflectionsUpdateTreshhold(float_t  value) ;

constexpr void __cordl_internal_set_refreshing(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_renderCam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_renderCamObj(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_renderID(int32_t  value) ;

constexpr void __cordl_internal_set_renderId(int32_t  value) ;

constexpr void __cordl_internal_set_renderTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_standalone(bool  value) ;

constexpr void __cordl_internal_set_updateReflectionOnGameTime(bool  value) ;

constexpr void __cordl_internal_set_useFog(bool  value) ;

constexpr void __cordl_internal_set_useTimeSlicing(bool  value) ;

/// @brief Method .ctor, addr 0x180618820, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Quaternion> getStaticF_orientations() ;

static inline void setStaticF_orientations(::ArrayW<::UnityEngine::Quaternion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroReflectionProbe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflectionProbe(EnviroReflectionProbe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflectionProbe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflectionProbe(EnviroReflectionProbe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18486};

/// @brief Field standalone, offset: 0x20, size: 0x1, def value: None
 bool  ___standalone;

/// @brief Field updateReflectionOnGameTime, offset: 0x21, size: 0x1, def value: None
 bool  ___updateReflectionOnGameTime;

/// @brief Field reflectionsUpdateTreshhold, offset: 0x24, size: 0x4, def value: None
 float_t  ___reflectionsUpdateTreshhold;

/// @brief Field useTimeSlicing, offset: 0x28, size: 0x1, def value: None
 bool  ___useTimeSlicing;

/// @brief Field renderCam, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___renderCam;

/// @brief Field myProbe, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ReflectionProbe>  ___myProbe;

/// @brief Field customRendering, offset: 0x40, size: 0x1, def value: None
 bool  ___customRendering;

/// @brief Field enviroRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroRenderer>  ___enviroRenderer;

/// @brief Field useFog, offset: 0x50, size: 0x1, def value: None
 bool  ___useFog;

/// @brief Field bakingCam, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___bakingCam;

/// @brief Field renderId, offset: 0x60, size: 0x4, def value: None
 int32_t  ___renderId;

/// @brief Field currentMode, offset: 0x64, size: 0x1, def value: None
 bool  ___currentMode;

/// @brief Field currentRes, offset: 0x68, size: 0x4, def value: None
 int32_t  ___currentRes;

/// @brief Field cubemap, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___cubemap;

/// @brief Field finalCubemap, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___finalCubemap;

/// @brief Field mirrorTexture, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___mirrorTexture;

/// @brief Field renderTexture, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___renderTexture;

/// @brief Field renderCamObj, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___renderCamObj;

/// @brief Field mirror, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___mirror;

/// @brief Field bakeMat, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___bakeMat;

/// @brief Field convolutionMat, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___convolutionMat;

/// @brief Field refreshing, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___refreshing;

/// @brief Field renderID, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___renderID;

/// @brief Field lastRelfectionUpdate, offset: 0xc0, size: 0x8, def value: None
 double_t  ___lastRelfectionUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___standalone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___updateReflectionOnGameTime) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___reflectionsUpdateTreshhold) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___useTimeSlicing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___renderCam) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___myProbe) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___customRendering) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___enviroRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___useFog) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___bakingCam) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___renderId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___currentMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___currentRes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___cubemap) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___finalCubemap) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___mirrorTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___renderTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___renderCamObj) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___mirror) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___bakeMat) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___convolutionMat) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___refreshing) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___renderID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflectionProbe, ___lastRelfectionUpdate) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflectionProbe) == 0xc8, "Size mismatch!");

} // namespace end def Enviro
