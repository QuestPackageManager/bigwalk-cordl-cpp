#pragma once
// IWYU pragma private; include "Enviro/EnviroLightningModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroLightningModule)
namespace Enviro {
class EnviroLightningModule__CloudsFlash_d__10;
}
namespace Enviro {
class EnviroLightningModule__LightningStorm_d__8;
}
namespace Enviro {
class EnviroLightningModule__PlayThunderSFX_d__9;
}
namespace Enviro {
class EnviroLightning;
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
struct Vector3;
}
// Forward declare root types
namespace Enviro {
class EnviroLightningModule;
}
namespace Enviro {
class EnviroLightningModule__CloudsFlash_d__10;
}
namespace Enviro {
class EnviroLightningModule__LightningStorm_d__8;
}
namespace Enviro {
class EnviroLightningModule__PlayThunderSFX_d__9;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroLightningModule*);
MARK_REF_T(::Enviro::EnviroLightningModule__CloudsFlash_d__10*);
MARK_REF_T(::Enviro::EnviroLightningModule__LightningStorm_d__8*);
MARK_REF_T(::Enviro::EnviroLightningModule__PlayThunderSFX_d__9*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroLightningModule*, "Enviro", "EnviroLightningModule");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroLightningModule__CloudsFlash_d__10*, "Enviro", "EnviroLightningModule/<CloudsFlash>d__10");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroLightningModule__LightningStorm_d__8*, "Enviro", "EnviroLightningModule/<LightningStorm>d__8");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroLightningModule__PlayThunderSFX_d__9*, "Enviro", "EnviroLightningModule/<PlayThunderSFX>d__9");
// Dependencies System.Object, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroLightningModule/<CloudsFlash>d__10
class CORDL_TYPE EnviroLightningModule__CloudsFlash_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroLightningModule>  __4__this;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field from, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_from, put=__cordl_internal_set_from)) ::UnityEngine::Vector3  from;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061a470, size 0x140, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroLightningModule__CloudsFlash_d__10* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroLightningModule> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroLightningModule>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_from() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_from() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroLightningModule>  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_from(::UnityEngine::Vector3  value) ;

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
constexpr EnviroLightningModule__CloudsFlash_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightningModule__CloudsFlash_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroLightningModule__CloudsFlash_d__10(EnviroLightningModule__CloudsFlash_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightningModule__CloudsFlash_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroLightningModule__CloudsFlash_d__10(EnviroLightningModule__CloudsFlash_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18465};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroLightningModule>  _____4__this;

/// @brief Field from, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___from;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroLightningModule__CloudsFlash_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__CloudsFlash_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__CloudsFlash_d__10, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__CloudsFlash_d__10, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__CloudsFlash_d__10, ___from) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroLightningModule__CloudsFlash_d__10) == 0x40, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroLightningModule/<LightningStorm>d__8
class CORDL_TYPE EnviroLightningModule__LightningStorm_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroLightningModule>  __4__this;

/// @brief Field spwn, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_spwn, put=__cordl_internal_set_spwn)) ::UnityEngine::Vector3  spwn;

/// @brief Field targ, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_targ, put=__cordl_internal_set_targ)) ::UnityEngine::Vector3  targ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061b920, size 0x110, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroLightningModule__LightningStorm_d__8* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Enviro::EnviroLightningModule> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroLightningModule>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spwn() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spwn() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targ() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targ() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroLightningModule>  value) ;

constexpr void __cordl_internal_set_spwn(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targ(::UnityEngine::Vector3  value) ;

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
constexpr EnviroLightningModule__LightningStorm_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightningModule__LightningStorm_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroLightningModule__LightningStorm_d__8(EnviroLightningModule__LightningStorm_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightningModule__LightningStorm_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroLightningModule__LightningStorm_d__8(EnviroLightningModule__LightningStorm_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18466};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroLightningModule>  _____4__this;

/// @brief Field spwn, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spwn;

/// @brief Field targ, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroLightningModule__LightningStorm_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__LightningStorm_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__LightningStorm_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__LightningStorm_d__8, ___spwn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__LightningStorm_d__8, ___targ) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroLightningModule__LightningStorm_d__8) == 0x40, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroLightningModule/<PlayThunderSFX>d__9
class CORDL_TYPE EnviroLightningModule__PlayThunderSFX_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18061ba30, size 0xb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroLightningModule__PlayThunderSFX_d__9* New_ctor(int32_t  __1__state) ;

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

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

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
constexpr EnviroLightningModule__PlayThunderSFX_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightningModule__PlayThunderSFX_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroLightningModule__PlayThunderSFX_d__9(EnviroLightningModule__PlayThunderSFX_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightningModule__PlayThunderSFX_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroLightningModule__PlayThunderSFX_d__9(EnviroLightningModule__PlayThunderSFX_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18467};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroLightningModule__PlayThunderSFX_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__PlayThunderSFX_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule__PlayThunderSFX_d__9, ___delay) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroLightningModule__PlayThunderSFX_d__9) == 0x28, "Size mismatch!");

} // namespace end def Enviro
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroLightningModule
class CORDL_TYPE EnviroLightningModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
using _CloudsFlash_d__10 = ::Enviro::EnviroLightningModule__CloudsFlash_d__10;

using _LightningStorm_d__8 = ::Enviro::EnviroLightningModule__LightningStorm_d__8;

using _PlayThunderSFX_d__9 = ::Enviro::EnviroLightningModule__PlayThunderSFX_d__9;

/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroLightning*  Settings;

/// @brief Field lightningStart, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightningStart, put=__cordl_internal_set_lightningStart)) float_t  lightningStart;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroLightningModule>  preset;

/// @brief Field showLightningControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showLightningControls, put=__cordl_internal_set_showLightningControls)) bool  showLightningControls;

/// @brief Field spawned, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_spawned, put=__cordl_internal_set_spawned)) bool  spawned;

/// @brief Method CastLightningBolt, addr 0x180615660, size 0x2e0, virtual false, abstract: false, final false
inline void CastLightningBolt(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to) ;

/// @brief Method CastLightningBoltRandom, addr 0x180615360, size 0x300, virtual false, abstract: false, final false
inline void CastLightningBoltRandom() ;

/// @brief Method CloudsFlash, addr 0x180615940, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CloudsFlash(float_t  delay, ::UnityEngine::Vector3  from) ;

/// @brief Method LightningStorm, addr 0x1806159b0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LightningStorm(::UnityEngine::Vector3  spwn, ::UnityEngine::Vector3  targ) ;

/// @brief Method LoadModuleValues, addr 0x180615a30, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroLightningModule* New_ctor() ;

/// @brief Method PlayThunderSFX, addr 0x180615aa0, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayThunderSFX(float_t  delay) ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x180615ad0, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroLightningModule*  _cordl_module) ;

/// @brief Method UpdateModule, addr 0x180615b20, size 0x60, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr ::Enviro::EnviroLightning* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroLightning*& __cordl_internal_get_Settings() ;

constexpr float_t const& __cordl_internal_get_lightningStart() const;

constexpr float_t& __cordl_internal_get_lightningStart() ;

constexpr ::UnityW<::Enviro::EnviroLightningModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroLightningModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showLightningControls() const;

constexpr bool& __cordl_internal_get_showLightningControls() ;

constexpr bool const& __cordl_internal_get_spawned() const;

constexpr bool& __cordl_internal_get_spawned() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroLightning*  value) ;

constexpr void __cordl_internal_set_lightningStart(float_t  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroLightningModule>  value) ;

constexpr void __cordl_internal_set_showLightningControls(bool  value) ;

constexpr void __cordl_internal_set_spawned(bool  value) ;

/// @brief Method .ctor, addr 0x180615b80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroLightningModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightningModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroLightningModule(EnviroLightningModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightningModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroLightningModule(EnviroLightningModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18468};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroLightning*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroLightningModule>  ___preset;

/// @brief Field showLightningControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showLightningControls;

/// @brief Field spawned, offset: 0x31, size: 0x1, def value: None
 bool  ___spawned;

/// @brief Field lightningStart, offset: 0x34, size: 0x4, def value: None
 float_t  ___lightningStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroLightningModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule, ___showLightningControls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule, ___spawned) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightningModule, ___lightningStart) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroLightningModule) == 0x38, "Size mismatch!");

} // namespace end def Enviro
