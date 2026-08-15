#pragma once
// IWYU pragma private; include "Dissonance/Demo/SpeakerIndicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpeakerIndicator)
namespace Dissonance::Demo {
class SpeakerIndicator__FindPlayerState_d__10;
}
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
class VoicePlayerState;
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
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Dissonance::Demo {
class SpeakerIndicator;
}
namespace Dissonance::Demo {
class SpeakerIndicator__FindPlayerState_d__10;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::SpeakerIndicator*);
MARK_REF_T(::Dissonance::Demo::SpeakerIndicator__FindPlayerState_d__10*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::SpeakerIndicator*, "Dissonance.Demo", "SpeakerIndicator");
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::SpeakerIndicator__FindPlayerState_d__10*, "Dissonance.Demo", "SpeakerIndicator/<FindPlayerState>d__10");
// Dependencies System.Object
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.SpeakerIndicator/<FindPlayerState>d__10
class CORDL_TYPE SpeakerIndicator__FindPlayerState_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Dissonance::Demo::SpeakerIndicator>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1805d2290, size 0x180, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Dissonance::Demo::SpeakerIndicator__FindPlayerState_d__10* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Dissonance::Demo::SpeakerIndicator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Dissonance::Demo::SpeakerIndicator>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Dissonance::Demo::SpeakerIndicator>  value) ;

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
constexpr SpeakerIndicator__FindPlayerState_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeakerIndicator__FindPlayerState_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeakerIndicator__FindPlayerState_d__10(SpeakerIndicator__FindPlayerState_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeakerIndicator__FindPlayerState_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeakerIndicator__FindPlayerState_d__10(SpeakerIndicator__FindPlayerState_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16851};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Dissonance::Demo::SpeakerIndicator>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator__FindPlayerState_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator__FindPlayerState_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator__FindPlayerState_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::SpeakerIndicator__FindPlayerState_d__10) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Demo
// Dependencies UnityEngine.MonoBehaviour
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.SpeakerIndicator
class CORDL_TYPE SpeakerIndicator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FindPlayerState_d__10 = ::Dissonance::Demo::SpeakerIndicator__FindPlayerState_d__10;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

/// @brief Field _indicator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__indicator, put=__cordl_internal_set__indicator)) ::UnityW<::UnityEngine::GameObject>  _indicator;

/// @brief Field _intensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__intensity, put=__cordl_internal_set__intensity)) float_t  _intensity;

/// @brief Field _light, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__light, put=__cordl_internal_set__light)) ::UnityW<::UnityEngine::Light>  _light;

/// @brief Field _player, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::Dissonance::IDissonancePlayer*  _player;

/// @brief Field _state, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Dissonance::VoicePlayerState*  _state;

/// @brief Field _transform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Method FindPlayerState, addr 0x1805d11c0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FindPlayerState() ;

static inline ::Dissonance::Demo::SpeakerIndicator* New_ctor() ;

/// @brief Method OnDisable, addr 0x1805d1210, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1805d1220, size 0x180, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1805d1400, size 0x170, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateChildTransform, addr 0x1805d13a0, size 0x40, virtual false, abstract: false, final false
static inline void UpdateChildTransform(::UnityEngine::Transform*  transform, float_t  intensity) ;

/// @brief Method UpdateLight, addr 0x1805d13e0, size 0x20, virtual false, abstract: false, final false
static inline void UpdateLight(::UnityEngine::Light*  light, float_t  intensity) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__indicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__indicator() ;

constexpr float_t const& __cordl_internal_get__intensity() const;

constexpr float_t& __cordl_internal_get__intensity() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__light() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__light() ;

constexpr ::Dissonance::IDissonancePlayer* const& __cordl_internal_get__player() const;

constexpr ::Dissonance::IDissonancePlayer*& __cordl_internal_get__player() ;

constexpr ::Dissonance::VoicePlayerState* const& __cordl_internal_get__state() const;

constexpr ::Dissonance::VoicePlayerState*& __cordl_internal_get__state() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set__indicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__intensity(float_t  value) ;

constexpr void __cordl_internal_set__light(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set__player(::Dissonance::IDissonancePlayer*  value) ;

constexpr void __cordl_internal_set__state(::Dissonance::VoicePlayerState*  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsSpeaking, addr 0x1805d1570, size 0x60, virtual false, abstract: false, final false
inline bool get_IsSpeaking() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeakerIndicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeakerIndicator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeakerIndicator(SpeakerIndicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeakerIndicator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeakerIndicator(SpeakerIndicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16852};

/// @brief Field _indicator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____indicator;

/// @brief Field _light, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____light;

/// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// @brief Field _intensity, offset: 0x38, size: 0x4, def value: None
 float_t  ____intensity;

/// @brief Field _player, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::IDissonancePlayer*  ____player;

/// @brief Field _state, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::VoicePlayerState*  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator, ____indicator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator, ____light) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator, ____transform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator, ____intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator, ____player) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::SpeakerIndicator, ____state) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::SpeakerIndicator) == 0x50, "Size mismatch!");

} // namespace end def Dissonance::Demo
