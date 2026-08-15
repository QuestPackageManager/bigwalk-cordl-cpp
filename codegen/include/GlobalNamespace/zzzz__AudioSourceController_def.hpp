#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSourceController)
namespace GlobalNamespace {
class ActionRunnerSimple_AudioSourceController___c;
}
namespace GlobalNamespace {
template<typename TOwner,typename UData>
class ActionRunnerWithData_2_AudioSourceController___c;
}
namespace GlobalNamespace {
template<typename TOwner>
class ActionRunner_1_AudioSourceController___c;
}
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioBus;
}
namespace GlobalNamespace {
class AudioFilterBase;
}
namespace GlobalNamespace {
class AudioFilterMixer;
}
namespace GlobalNamespace {
struct AudioFilterType;
}
namespace GlobalNamespace {
class AudioOcclusionBase;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
struct AudioRTPC_YAxisType;
}
namespace GlobalNamespace {
struct AudioSourceController_ASCEvent;
}
namespace GlobalNamespace {
class AudioSourceController_ActionRunnerSimple;
}
namespace GlobalNamespace {
template<typename TOwner,typename UData>
class AudioSourceController_ActionRunnerWithData_2;
}
namespace GlobalNamespace {
template<typename TOwner>
class AudioSourceController_ActionRunner_1;
}
namespace GlobalNamespace {
struct AudioSourceController_AudioState;
}
namespace GlobalNamespace {
struct AudioSourceController_Storage16;
}
namespace GlobalNamespace {
class AudioSourceRefs;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
template<typename T,typename U,typename V>
class FuncOneOut_3;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class IAudioFilter;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class IAudioVolume;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
class UnityFilterBase;
}
namespace GlobalNamespace {
struct UnityFilterType;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioSourceController_AudioState;
}
namespace GlobalNamespace {
class ActionRunnerSimple_AudioSourceController___c;
}
namespace GlobalNamespace {
template<typename TOwner,typename UData>
class ActionRunnerWithData_2_AudioSourceController___c;
}
namespace GlobalNamespace {
template<typename TOwner>
class ActionRunner_1_AudioSourceController___c;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioSourceController_ActionRunnerSimple;
}
namespace GlobalNamespace {
template<typename TOwner,typename UData>
class AudioSourceController_ActionRunnerWithData_2;
}
namespace GlobalNamespace {
template<typename TOwner>
class AudioSourceController_ActionRunner_1;
}
namespace GlobalNamespace {
struct AudioSourceController_ASCEvent;
}
namespace GlobalNamespace {
struct AudioSourceController_Storage16;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioSourceController_AudioState);
MARK_REF_T(::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c);
MARK_GEN_REF_T_PTR(::GlobalNamespace::ActionRunner_1_AudioSourceController___c);
MARK_REF_T(::GlobalNamespace::AudioSourceController*);
MARK_REF_T(::GlobalNamespace::AudioSourceController_ActionRunnerSimple*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::AudioSourceController_ActionRunnerWithData_2);
MARK_GEN_REF_T_PTR(::GlobalNamespace::AudioSourceController_ActionRunner_1);
MARK_VAL_T(::GlobalNamespace::AudioSourceController_ASCEvent);
MARK_VAL_T(::GlobalNamespace::AudioSourceController_Storage16);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceController_AudioState, "", "AudioSourceController/AudioState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*, "", "AudioSourceController/ActionRunnerSimple/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c, "", "AudioSourceController/ActionRunnerWithData`2/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ActionRunner_1_AudioSourceController___c, "", "AudioSourceController/ActionRunner`1/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceController*, "", "AudioSourceController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceController_ActionRunnerSimple*, "", "AudioSourceController/ActionRunnerSimple");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::AudioSourceController_ActionRunnerWithData_2, "", "AudioSourceController/ActionRunnerWithData`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::AudioSourceController_ActionRunner_1, "", "AudioSourceController/ActionRunner`1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceController_ASCEvent, "", "AudioSourceController/ASCEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceController_Storage16, "", "AudioSourceController/Storage16");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioSourceController/AudioState
struct CORDL_TYPE AudioSourceController_AudioState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioSourceController_AudioState_Unwrapped
enum struct __AudioSourceController_AudioState_Unwrapped : int32_t {
__E_Stopped = static_cast<int32_t>(0x0),
__E_Playing = static_cast<int32_t>(0x1),
__E_Standby = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioSourceController_AudioState_Unwrapped () const noexcept {
return static_cast<__AudioSourceController_AudioState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceController_AudioState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioSourceController_AudioState(int32_t  value__) noexcept;

/// @brief Field Playing value: I32(1)
static ::GlobalNamespace::AudioSourceController_AudioState const Playing;

/// @brief Field Standby value: I32(2)
static ::GlobalNamespace::AudioSourceController_AudioState const Standby;

/// @brief Field Stopped value: I32(0)
static ::GlobalNamespace::AudioSourceController_AudioState const Stopped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSourceController_AudioState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSourceController_AudioState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioSourceController/Storage16
struct CORDL_TYPE AudioSourceController_Storage16 {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>*() ;

/// @brief Method Equals, addr 0x1804a5ad0, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1804a5a90, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::AudioSourceController_Storage16  other) ;

/// @brief Method GetHashCode, addr 0x1804a5b50, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>"
constexpr ::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>* i___System__IEquatable_1___GlobalNamespace__AudioSourceController_Storage16_() ;

/// @brief Method op_Equality, addr 0x1804a5b70, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::AudioSourceController_Storage16  left, ::GlobalNamespace::AudioSourceController_Storage16  right) ;

/// @brief Method op_Inequality, addr 0x1804a5b90, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::AudioSourceController_Storage16  left, ::GlobalNamespace::AudioSourceController_Storage16  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceController_Storage16() ;

// Ctor Parameters [CppParam { name: "A", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "B", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr AudioSourceController_Storage16(uint64_t  A, uint64_t  B) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17573};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field A, offset: 0x0, size: 0x8, def value: None
 uint64_t  A;

/// @brief Field B, offset: 0x8, size: 0x8, def value: None
 uint64_t  B;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSourceController_Storage16, A) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController_Storage16, B) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSourceController_Storage16) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioSourceController::Storage16
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioSourceController/ASCEvent
struct CORDL_TYPE AudioSourceController_ASCEvent {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceController_ASCEvent() ;

// Ctor Parameters [CppParam { name: "Owner", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "Action", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "RefData", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "ValData", ty: "::GlobalNamespace::AudioSourceController_Storage16", modifiers: "", def_value: None }, CppParam { name: "Runner", ty: "::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*", modifiers: "", def_value: None }]
constexpr AudioSourceController_ASCEvent(::System::Object*  Owner, ::System::Object*  Action, ::System::Object*  RefData, ::GlobalNamespace::AudioSourceController_Storage16  ValData, ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  Runner) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17574};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Owner, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  Owner;

/// @brief Field Action, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  Action;

/// @brief Field RefData, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  RefData;

/// @brief Field ValData, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::AudioSourceController_Storage16  ValData;

/// @brief Field Runner, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  Runner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSourceController_ASCEvent, Owner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController_ASCEvent, Action) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController_ASCEvent, RefData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController_ASCEvent, ValData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController_ASCEvent, Runner) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSourceController_ASCEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TOwner,typename UData>
// Is value type: false
// CS Name: AudioSourceController/ActionRunnerWithData`2/<>c<TOwner,UData>
class CORDL_TYPE ActionRunnerWithData_2_AudioSourceController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*  __9;

static inline ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>* New_ctor() ;

/// @brief Method <.cctor>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __cctor_b__1_0(::GlobalNamespace::AudioSourceController_ASCEvent  e, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>* getStaticF___9() ;

static inline void setStaticF___9(::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionRunnerWithData_2_AudioSourceController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionRunnerWithData_2_AudioSourceController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionRunnerWithData_2_AudioSourceController___c(ActionRunnerWithData_2_AudioSourceController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionRunnerWithData_2_AudioSourceController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionRunnerWithData_2_AudioSourceController___c(ActionRunnerWithData_2_AudioSourceController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TOwner,typename UData>
// Is value type: false
// CS Name: AudioSourceController/ActionRunnerWithData`2<TOwner,UData>
class CORDL_TYPE AudioSourceController_ActionRunnerWithData_2 : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner, UData>;

/// @brief Field Invoke, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invoke, put=setStaticF_Invoke)) ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  Invoke;

static inline ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>* getStaticF_Invoke() ;

static inline void setStaticF_Invoke(::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceController_ActionRunnerWithData_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceController_ActionRunnerWithData_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSourceController_ActionRunnerWithData_2(AudioSourceController_ActionRunnerWithData_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceController_ActionRunnerWithData_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSourceController_ActionRunnerWithData_2(AudioSourceController_ActionRunnerWithData_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TOwner>
// Is value type: false
// CS Name: AudioSourceController/ActionRunner`1/<>c<TOwner>
class CORDL_TYPE ActionRunner_1_AudioSourceController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*  __9;

static inline ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>* New_ctor() ;

/// @brief Method <.cctor>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __cctor_b__1_0(::GlobalNamespace::AudioSourceController_ASCEvent  e, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>* getStaticF___9() ;

static inline void setStaticF___9(::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionRunner_1_AudioSourceController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionRunner_1_AudioSourceController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionRunner_1_AudioSourceController___c(ActionRunner_1_AudioSourceController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionRunner_1_AudioSourceController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionRunner_1_AudioSourceController___c(ActionRunner_1_AudioSourceController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17577};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TOwner>
// Is value type: false
// CS Name: AudioSourceController/ActionRunner`1<TOwner>
class CORDL_TYPE AudioSourceController_ActionRunner_1 : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>;

/// @brief Field Invoke, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invoke, put=setStaticF_Invoke)) ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  Invoke;

static inline ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>* getStaticF_Invoke() ;

static inline void setStaticF_Invoke(::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceController_ActionRunner_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceController_ActionRunner_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSourceController_ActionRunner_1(AudioSourceController_ActionRunner_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceController_ActionRunner_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSourceController_ActionRunner_1(AudioSourceController_ActionRunner_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17578};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSourceController/ActionRunnerSimple/<>c
class CORDL_TYPE ActionRunnerSimple_AudioSourceController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*  __9;

static inline ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c* New_ctor() ;

/// @brief Method <.cctor>b__1_0, addr 0x1804a61a0, size 0x30, virtual false, abstract: false, final false
inline void __cctor_b__1_0(::GlobalNamespace::AudioSourceController_ASCEvent  e, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c* getStaticF___9() ;

static inline void setStaticF___9(::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionRunnerSimple_AudioSourceController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionRunnerSimple_AudioSourceController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionRunnerSimple_AudioSourceController___c(ActionRunnerSimple_AudioSourceController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionRunnerSimple_AudioSourceController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionRunnerSimple_AudioSourceController___c(ActionRunnerSimple_AudioSourceController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17579};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSourceController/ActionRunnerSimple
class CORDL_TYPE AudioSourceController_ActionRunnerSimple : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c;

/// @brief Field Invoke, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invoke, put=setStaticF_Invoke)) ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  Invoke;

static inline ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>* getStaticF_Invoke() ;

static inline void setStaticF_Invoke(::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceController_ActionRunnerSimple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceController_ActionRunnerSimple", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSourceController_ActionRunnerSimple(AudioSourceController_ActionRunnerSimple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceController_ActionRunnerSimple", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSourceController_ActionRunnerSimple(AudioSourceController_ActionRunnerSimple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioSourceController_ActionRunnerSimple) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioSourceController::AudioState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSourceController
class CORDL_TYPE AudioSourceController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ASCEvent = ::GlobalNamespace::AudioSourceController_ASCEvent;

using ActionRunnerSimple = ::GlobalNamespace::AudioSourceController_ActionRunnerSimple;

template<typename TOwner,typename UData>
using ActionRunnerWithData_2 = ::GlobalNamespace::AudioSourceController_ActionRunnerWithData_2<TOwner, UData>;

template<typename TOwner>
using ActionRunner_1 = ::GlobalNamespace::AudioSourceController_ActionRunner_1<TOwner>;

using AudioState = ::GlobalNamespace::AudioSourceController_AudioState;

using Storage16 = ::GlobalNamespace::AudioSourceController_Storage16;

 __declspec(property(get=get_AttenuationVol)) float_t  AttenuationVol;

 __declspec(property(get=get_AudioSettingsVol)) float_t  AudioSettingsVol;

 __declspec(property(get=get_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  AudioSource;

 __declspec(property(get=get_AudioSourceRefs)) ::UnityW<::GlobalNamespace::AudioSourceRefs>  AudioSourceRefs;

 __declspec(property(get=get_Bus)) ::UnityW<::GlobalNamespace::AudioBus>  Bus;

 __declspec(property(get=get_BypassFilters, put=set_BypassFilters)) bool  BypassFilters;

 __declspec(property(get=get_CachedTransform)) ::UnityW<::UnityEngine::Transform>  CachedTransform;

 __declspec(property(get=get_ChainOfVolume)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>*  ChainOfVolume;

 __declspec(property(get=get_Clip)) ::UnityW<::UnityEngine::AudioClip>  Clip;

 __declspec(property(get=get_Cue)) ::UnityW<::GlobalNamespace::SoundCue>  Cue;

 __declspec(property(get=get_Doppler)) float_t  Doppler;

 __declspec(property(get=get_FadeTimer)) float_t  FadeTimer;

 __declspec(property(get=get_FadeVol)) float_t  FadeVol;

 __declspec(property(get=get_FilterMixer)) ::UnityW<::GlobalNamespace::AudioFilterMixer>  FilterMixer;

 __declspec(property(get=get_FilterSynthesizerMode, put=set_FilterSynthesizerMode)) bool  FilterSynthesizerMode;

 __declspec(property(get=get_Filters)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  Filters;

 __declspec(property(get=get_FinalVolume)) float_t  FinalVolume;

 __declspec(property(get=get_FollowTransform, put=set_FollowTransform)) ::UnityW<::UnityEngine::Transform>  FollowTransform;

 __declspec(property(get=get_Hibernated_Attenuation, put=set_Hibernated_Attenuation)) bool  Hibernated_Attenuation;

 __declspec(property(get=get_Hibernated_Forced, put=set_Hibernated_Forced)) bool  Hibernated_Forced;

 __declspec(property(get=get_Hibernated_VoiceLimiting, put=set_Hibernated_VoiceLimiting)) bool  Hibernated_VoiceLimiting;

 __declspec(property(get=get_HibernationVol)) float_t  HibernationVol;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_IsActuallyPlaying)) bool  IsActuallyPlaying;

 __declspec(property(get=get_IsFadingOut)) bool  IsFadingOut;

 __declspec(property(get=get_IsHibernating)) bool  IsHibernating;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_IsScheduledToPlay)) bool  IsScheduledToPlay;

 __declspec(property(get=get_Loop)) bool  Loop;

 __declspec(property(get=get_Occlusion)) ::UnityW<::GlobalNamespace::AudioOcclusionBase>  Occlusion;

 __declspec(property(get=get_OriginAssets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  OriginAssets;

 __declspec(property(get=get_Owner)) ::UnityW<::UnityEngine::Object>  Owner;

 __declspec(property(get=get_Pan)) float_t  Pan;

 __declspec(property(get=get_Pitch)) float_t  Pitch;

 __declspec(property(get=get_PlayHead)) float_t  PlayHead;

 __declspec(property(get=get_PlayHeadMoving)) bool  PlayHeadMoving;

 __declspec(property(get=get_PlayedDSPTime)) double_t  PlayedDSPTime;

 __declspec(property(get=get_Priority, put=set_Priority)) int32_t  Priority;

 __declspec(property(get=get_RTPC, put=set_RTPC)) bool  RTPC;

 __declspec(property(get=get_RTPCVol)) float_t  RTPCVol;

 __declspec(property(get=get_ScheduledEndDSPTime)) double_t  ScheduledEndDSPTime;

 __declspec(property(get=get_ScheduledStartDSPTime)) double_t  ScheduledStartDSPTime;

 __declspec(property(get=get_ScriptablePan, put=set_ScriptablePan)) float_t  ScriptablePan;

 __declspec(property(get=get_ScriptablePitch, put=set_ScriptablePitch)) float_t  ScriptablePitch;

 __declspec(property(get=get_ScriptableSpatialBlend, put=set_ScriptableSpatialBlend)) float_t  ScriptableSpatialBlend;

 __declspec(property(get=get_ScriptableSpread, put=set_ScriptableSpread)) float_t  ScriptableSpread;

 __declspec(property(get=get_ScriptableVolume, put=set_ScriptableVolume)) float_t  ScriptableVolume;

 __declspec(property(get=get_SpatialBlend)) float_t  SpatialBlend;

 __declspec(property(get=get_Spread)) float_t  Spread;

 __declspec(property(get=get_State, put=set_State)) ::GlobalNamespace::AudioSourceController_AudioState  State;

 __declspec(property(get=get_SyncPitchMultiplier, put=set_SyncPitchMultiplier)) float_t  SyncPitchMultiplier;

 __declspec(property(get=get_TargetFadeInTime)) float_t  TargetFadeInTime;

 __declspec(property(get=get_TargetFadeOutTime)) float_t  TargetFadeOutTime;

 __declspec(property(get=get_UnityFilterWrappers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>*  UnityFilterWrappers;

 __declspec(property(get=get_UpdatingAttenuation, put=set_UpdatingAttenuation)) bool  UpdatingAttenuation;

 __declspec(property(get=get_XProvider, put=set_XProvider)) ::GlobalNamespace::IAudioRTPCXProvider*  XProvider;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

/// @brief Field <Hibernated_Attenuation>k__BackingField, offset 0x13c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Hibernated_Attenuation_k__BackingField, put=__cordl_internal_set__Hibernated_Attenuation_k__BackingField)) bool  _Hibernated_Attenuation_k__BackingField;

/// @brief Field <Hibernated_Forced>k__BackingField, offset 0x13b, size 0x1 
 __declspec(property(get=__cordl_internal_get__Hibernated_Forced_k__BackingField, put=__cordl_internal_set__Hibernated_Forced_k__BackingField)) bool  _Hibernated_Forced_k__BackingField;

/// @brief Field <Hibernated_VoiceLimiting>k__BackingField, offset 0x13a, size 0x1 
 __declspec(property(get=__cordl_internal_get__Hibernated_VoiceLimiting_k__BackingField, put=__cordl_internal_set__Hibernated_VoiceLimiting_k__BackingField)) bool  _Hibernated_VoiceLimiting_k__BackingField;

/// @brief Field <Priority>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__Priority_k__BackingField, put=__cordl_internal_set__Priority_k__BackingField)) int32_t  _Priority_k__BackingField;

/// @brief Field <RTPC>k__BackingField, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get__RTPC_k__BackingField, put=__cordl_internal_set__RTPC_k__BackingField)) bool  _RTPC_k__BackingField;

/// @brief Field <ScriptablePan>k__BackingField, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScriptablePan_k__BackingField, put=__cordl_internal_set__ScriptablePan_k__BackingField)) float_t  _ScriptablePan_k__BackingField;

/// @brief Field <ScriptablePitch>k__BackingField, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScriptablePitch_k__BackingField, put=__cordl_internal_set__ScriptablePitch_k__BackingField)) float_t  _ScriptablePitch_k__BackingField;

/// @brief Field <ScriptableSpatialBlend>k__BackingField, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScriptableSpatialBlend_k__BackingField, put=__cordl_internal_set__ScriptableSpatialBlend_k__BackingField)) float_t  _ScriptableSpatialBlend_k__BackingField;

/// @brief Field <ScriptableSpread>k__BackingField, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScriptableSpread_k__BackingField, put=__cordl_internal_set__ScriptableSpread_k__BackingField)) float_t  _ScriptableSpread_k__BackingField;

/// @brief Field <ScriptableVolume>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScriptableVolume_k__BackingField, put=__cordl_internal_set__ScriptableVolume_k__BackingField)) float_t  _ScriptableVolume_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::GlobalNamespace::AudioSourceController_AudioState  _State_k__BackingField;

/// @brief Field <SyncPitchMultiplier>k__BackingField, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SyncPitchMultiplier_k__BackingField, put=__cordl_internal_set__SyncPitchMultiplier_k__BackingField)) float_t  _SyncPitchMultiplier_k__BackingField;

/// @brief Field <UpdatingAttenuation>k__BackingField, offset 0x139, size 0x1 
 __declspec(property(get=__cordl_internal_get__UpdatingAttenuation_k__BackingField, put=__cordl_internal_set__UpdatingAttenuation_k__BackingField)) bool  _UpdatingAttenuation_k__BackingField;

/// @brief Field <XProvider>k__BackingField, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__XProvider_k__BackingField, put=__cordl_internal_set__XProvider_k__BackingField)) ::GlobalNamespace::IAudioRTPCXProvider*  _XProvider_k__BackingField;

/// @brief Field _attenuationVol, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__attenuationVol, put=__cordl_internal_set__attenuationVol)) ::GlobalNamespace::AudioVolume*  _attenuationVol;

/// @brief Field _audioSettingsVol, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSettingsVol, put=__cordl_internal_set__audioSettingsVol)) ::GlobalNamespace::AudioVolume*  _audioSettingsVol;

/// @brief Field _audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _audioSourceRefs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSourceRefs, put=__cordl_internal_set__audioSourceRefs)) ::UnityW<::GlobalNamespace::AudioSourceRefs>  _audioSourceRefs;

/// @brief Field _bus, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__bus, put=__cordl_internal_set__bus)) ::UnityW<::GlobalNamespace::AudioBus>  _bus;

/// @brief Field _bypassFilters, offset 0x129, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypassFilters, put=__cordl_internal_set__bypassFilters)) bool  _bypassFilters;

/// @brief Field _cachedTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTransform, put=__cordl_internal_set__cachedTransform)) ::UnityW<::UnityEngine::Transform>  _cachedTransform;

/// @brief Field _chainOfVolume, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__chainOfVolume, put=__cordl_internal_set__chainOfVolume)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>*  _chainOfVolume;

/// @brief Field _clip, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__clip, put=__cordl_internal_set__clip)) ::UnityW<::UnityEngine::AudioClip>  _clip;

/// @brief Field _currentCue, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentCue, put=__cordl_internal_set__currentCue)) ::UnityW<::GlobalNamespace::SoundCue>  _currentCue;

/// @brief Field _doppler, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__doppler, put=__cordl_internal_set__doppler)) float_t  _doppler;

/// @brief Field _fadeTimer, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeTimer, put=__cordl_internal_set__fadeTimer)) float_t  _fadeTimer;

/// @brief Field _fadeVol, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeVol, put=__cordl_internal_set__fadeVol)) ::GlobalNamespace::AudioVolume*  _fadeVol;

/// @brief Field _filterMixer, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterMixer, put=__cordl_internal_set__filterMixer)) ::UnityW<::GlobalNamespace::AudioFilterMixer>  _filterMixer;

/// @brief Field _filterSynthesizerMode, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get__filterSynthesizerMode, put=__cordl_internal_set__filterSynthesizerMode)) bool  _filterSynthesizerMode;

/// @brief Field _filters, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__filters, put=__cordl_internal_set__filters)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  _filters;

/// @brief Field _finalVolume, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__finalVolume, put=__cordl_internal_set__finalVolume)) float_t  _finalVolume;

/// @brief Field _followTransform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__followTransform, put=__cordl_internal_set__followTransform)) ::UnityW<::UnityEngine::Transform>  _followTransform;

/// @brief Field _getXFunc, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__getXFunc, put=__cordl_internal_set__getXFunc)) ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  _getXFunc;

/// @brief Field _hibernationFadeTimer, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__hibernationFadeTimer, put=__cordl_internal_set__hibernationFadeTimer)) float_t  _hibernationFadeTimer;

/// @brief Field _hibernationVol, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hibernationVol, put=__cordl_internal_set__hibernationVol)) ::GlobalNamespace::AudioVolume*  _hibernationVol;

/// @brief Field _initialized, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _lastPlayHead, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastPlayHead, put=__cordl_internal_set__lastPlayHead)) float_t  _lastPlayHead;

/// @brief Field _loop, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__loop, put=__cordl_internal_set__loop)) bool  _loop;

/// @brief Field _occlusion, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__occlusion, put=__cordl_internal_set__occlusion)) ::UnityW<::GlobalNamespace::AudioOcclusionBase>  _occlusion;

/// @brief Field _onFadeOut, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__onFadeOut, put=__cordl_internal_set__onFadeOut)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  _onFadeOut;

/// @brief Field _onHibernate, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__onHibernate, put=__cordl_internal_set__onHibernate)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  _onHibernate;

/// @brief Field _onPause, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPause, put=__cordl_internal_set__onPause)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  _onPause;

/// @brief Field _onPlay, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPlay, put=__cordl_internal_set__onPlay)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  _onPlay;

/// @brief Field _onStop, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStop, put=__cordl_internal_set__onStop)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  _onStop;

/// @brief Field _onWakeUp, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__onWakeUp, put=__cordl_internal_set__onWakeUp)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  _onWakeUp;

/// @brief Field _originAssets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__originAssets, put=__cordl_internal_set__originAssets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  _originAssets;

/// @brief Field _owner, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__owner, put=__cordl_internal_set__owner)) ::UnityW<::UnityEngine::Object>  _owner;

/// @brief Field _pan, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__pan, put=__cordl_internal_set__pan)) float_t  _pan;

/// @brief Field _pitch, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__pitch, put=__cordl_internal_set__pitch)) float_t  _pitch;

/// @brief Field _playHead, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__playHead, put=__cordl_internal_set__playHead)) float_t  _playHead;

/// @brief Field _playHeadOffset, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__playHeadOffset, put=__cordl_internal_set__playHeadOffset)) float_t  _playHeadOffset;

/// @brief Field _playedDSPTime, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__playedDSPTime, put=__cordl_internal_set__playedDSPTime)) double_t  _playedDSPTime;

/// @brief Field _rtpcVol, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__rtpcVol, put=__cordl_internal_set__rtpcVol)) ::GlobalNamespace::AudioVolume*  _rtpcVol;

/// @brief Field _scheduledEndDSPTime, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__scheduledEndDSPTime, put=__cordl_internal_set__scheduledEndDSPTime)) double_t  _scheduledEndDSPTime;

/// @brief Field _scheduledStartDSPTime, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__scheduledStartDSPTime, put=__cordl_internal_set__scheduledStartDSPTime)) double_t  _scheduledStartDSPTime;

/// @brief Field _spatialBlend, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__spatialBlend, put=__cordl_internal_set__spatialBlend)) float_t  _spatialBlend;

/// @brief Field _spread, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__spread, put=__cordl_internal_set__spread)) float_t  _spread;

/// @brief Field _targetFadeInTime, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetFadeInTime, put=__cordl_internal_set__targetFadeInTime)) float_t  _targetFadeInTime;

/// @brief Field _targetFadeOutTime, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetFadeOutTime, put=__cordl_internal_set__targetFadeOutTime)) float_t  _targetFadeOutTime;

/// @brief Field _unityFilterWrappers, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__unityFilterWrappers, put=__cordl_internal_set__unityFilterWrappers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>*  _unityFilterWrappers;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method AddEvent, addr 0x18048fed0, size 0x170, virtual false, abstract: false, final false
inline void AddEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void AddEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void AddEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnFadeOut, addr 0x18048fe10, size 0x20, virtual false, abstract: false, final false
inline void AddEventOnFadeOut(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnFadeOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void AddEventOnFadeOut(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnFadeOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void AddEventOnFadeOut(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnHibernate, addr 0x18048fe30, size 0x20, virtual false, abstract: false, final false
inline void AddEventOnHibernate(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnHibernate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void AddEventOnHibernate(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnHibernate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void AddEventOnHibernate(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnPause, addr 0x18048fe50, size 0x20, virtual false, abstract: false, final false
inline void AddEventOnPause(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnPause, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void AddEventOnPause(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnPause, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void AddEventOnPause(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnPlay, addr 0x18048fe70, size 0x20, virtual false, abstract: false, final false
inline void AddEventOnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnPlay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void AddEventOnPlay(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnPlay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void AddEventOnPlay(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnStop, addr 0x18048fe90, size 0x20, virtual false, abstract: false, final false
inline void AddEventOnStop(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnStop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void AddEventOnStop(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnStop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void AddEventOnStop(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnWakeUp, addr 0x18048feb0, size 0x20, virtual false, abstract: false, final false
inline void AddEventOnWakeUp(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnWakeUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void AddEventOnWakeUp(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddEventOnWakeUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void AddEventOnWakeUp(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method AddFilter, addr 0x1804901f0, size 0x470, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioFilterBase> AddFilter(::GlobalNamespace::AudioFilterType  type, int32_t  index) ;

/// @brief Method AddFilter, addr 0x180490040, size 0x1b0, virtual false, abstract: false, final false
inline void AddFilter(::GlobalNamespace::IAudioFilter*  filter, int32_t  index) ;

/// @brief Method AddUnityFilter, addr 0x180490660, size 0x3d0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::UnityFilterBase> AddUnityFilter(::GlobalNamespace::UnityFilterType  filterType) ;

/// @brief Method AddVolume, addr 0x180490a30, size 0xe0, virtual false, abstract: false, final false
inline void AddVolume(::GlobalNamespace::IAudioVolume*  vol, ::UnityEngine::Object*  owner) ;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x180490b10, size 0x100, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x180490c10, size 0x120, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method CalculateVolume, addr 0x180490d30, size 0xe0, virtual false, abstract: false, final false
inline float_t CalculateVolume() ;

/// @brief Method ChangeTransformToFollow, addr 0x180490e10, size 0x30, virtual false, abstract: false, final false
inline void ChangeTransformToFollow(::UnityEngine::Transform*  newTransform) ;

/// @brief Method DoUpdate, addr 0x180490e40, size 0xb10, virtual false, abstract: false, final false
inline void DoUpdate(float_t  deltaTime) ;

/// @brief Method FadeOut, addr 0x180491950, size 0x170, virtual false, abstract: false, final false
inline void FadeOut(float_t  fadeOutOverride) ;

/// @brief Method GetRTPCValue, addr 0x180491ac0, size 0x2c0, virtual false, abstract: false, final false
inline bool GetRTPCValue(::GlobalNamespace::AudioRTPC_YAxisType  type, ::by_ref<float_t>  value) ;

/// @brief Method GetX, addr 0x180491d80, size 0x11f0, virtual true, abstract: false, final true
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method HibernateInternal, addr 0x180492f70, size 0x150, virtual false, abstract: false, final false
inline void HibernateInternal() ;

/// @brief Method Hibernate_Attenuation, addr 0x1804930c0, size 0xb0, virtual false, abstract: false, final false
inline void Hibernate_Attenuation() ;

/// @brief Method Hibernate_Force, addr 0x180493170, size 0x100, virtual false, abstract: false, final false
inline void Hibernate_Force(bool  immediate) ;

/// @brief Method Hibernate_VoiceLimiting, addr 0x180493270, size 0x100, virtual false, abstract: false, final false
inline void Hibernate_VoiceLimiting(bool  immediate) ;

/// @brief Method Initialize, addr 0x180493370, size 0x10, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::AudioSourceController* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnFadeOut, addr 0x180493380, size 0xd0, virtual false, abstract: false, final false
inline void OnFadeOut() ;

/// @brief Method OnHibernate, addr 0x180493450, size 0xa0, virtual false, abstract: false, final false
inline void OnHibernate() ;

/// @brief Method OnPause, addr 0x1804934f0, size 0xa0, virtual false, abstract: false, final false
inline void OnPause() ;

/// @brief Method OnPlay, addr 0x180493590, size 0xa0, virtual false, abstract: false, final false
inline void OnPlay() ;

/// @brief Method OnScheduledStartTimeReached, addr 0x180493630, size 0x50, virtual false, abstract: false, final false
inline void OnScheduledStartTimeReached(double_t  currentTime) ;

/// @brief Method OnStop, addr 0x180493680, size 0xd0, virtual false, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnWakeUp, addr 0x180493750, size 0xa0, virtual false, abstract: false, final false
inline void OnWakeUp() ;

/// @brief Method Pause, addr 0x1804937f0, size 0x220, virtual false, abstract: false, final false
inline void Pause(bool  freeAudioSource) ;

/// @brief Method PerformFade, addr 0x180493a10, size 0xa0, virtual false, abstract: false, final false
inline void PerformFade(float_t  dt, float_t  duration, ::by_ref<float_t>  timer, ::by_ref<::GlobalNamespace::AudioVolume*>  vol) ;

/// @brief Method PerformOcclusion, addr 0x180493ab0, size 0xb0, virtual false, abstract: false, final false
inline void PerformOcclusion() ;

/// @brief Method PerformRTPC, addr 0x180493b60, size 0x440, virtual false, abstract: false, final false
inline void PerformRTPC(bool  perform, float_t  deltaTime) ;

/// @brief Method Play, addr 0x1804942d0, size 0xd0, virtual false, abstract: false, final false
inline bool Play() ;

/// @brief Method Play, addr 0x1804943a0, size 0x420, virtual false, abstract: false, final false
inline bool Play(::GlobalNamespace::SoundCue*  cue, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, bool  rtpc, ::UnityEngine::Transform*  followTransform, double_t  delayOverride, float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes, bool  virtualize) ;

/// @brief Method PlayAudioSource, addr 0x180494000, size 0x50, virtual false, abstract: false, final false
inline bool PlayAudioSource() ;

/// @brief Method PlayAudioSourceScheduled, addr 0x180493fa0, size 0x60, virtual false, abstract: false, final false
inline bool PlayAudioSourceScheduled() ;

/// @brief Method PlayInternal, addr 0x180494050, size 0x280, virtual false, abstract: false, final false
inline bool PlayInternal(double_t  delay, bool  virtualize) ;

/// @brief Method RemoveEvent, addr 0x180494880, size 0x160, virtual false, abstract: false, final false
inline void RemoveEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void RemoveEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void RemoveEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnFadeOut, addr 0x1804947c0, size 0x20, virtual false, abstract: false, final false
inline void RemoveEventOnFadeOut(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnFadeOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void RemoveEventOnFadeOut(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnFadeOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void RemoveEventOnFadeOut(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnHibernate, addr 0x1804947e0, size 0x20, virtual false, abstract: false, final false
inline void RemoveEventOnHibernate(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnHibernate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void RemoveEventOnHibernate(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnHibernate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void RemoveEventOnHibernate(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnPause, addr 0x180494800, size 0x20, virtual false, abstract: false, final false
inline void RemoveEventOnPause(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnPause, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void RemoveEventOnPause(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnPause, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void RemoveEventOnPause(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnPlay, addr 0x180494820, size 0x20, virtual false, abstract: false, final false
inline void RemoveEventOnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnPlay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void RemoveEventOnPlay(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnPlay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void RemoveEventOnPlay(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnStop, addr 0x180494840, size 0x20, virtual false, abstract: false, final false
inline void RemoveEventOnStop(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnStop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void RemoveEventOnStop(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnStop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void RemoveEventOnStop(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnWakeUp, addr 0x180494860, size 0x20, virtual false, abstract: false, final false
inline void RemoveEventOnWakeUp(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnWakeUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner>
inline void RemoveEventOnWakeUp(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveEventOnWakeUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOwner,typename UData>
inline void RemoveEventOnWakeUp(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback) ;

/// @brief Method RemoveFilter, addr 0x1804949e0, size 0xf0, virtual false, abstract: false, final false
inline void RemoveFilter(::GlobalNamespace::IAudioFilter*  filter) ;

/// @brief Method RemoveVolume, addr 0x180494ad0, size 0xe0, virtual false, abstract: false, final false
inline void RemoveVolume(::GlobalNamespace::IAudioVolume*  vol, ::UnityEngine::Object*  owner) ;

/// @brief Method ResetAudioSource, addr 0x180494bb0, size 0x580, virtual false, abstract: false, final false
inline void ResetAudioSource(bool  freeAudioSource) ;

/// @brief Method ResetController, addr 0x180495130, size 0x5f0, virtual false, abstract: false, final false
inline void ResetController(bool  stopUpdating) ;

/// @brief Method SeekTo, addr 0x180495720, size 0xf0, virtual false, abstract: false, final false
inline void SeekTo(float_t  targetTime) ;

/// @brief Method SetPlaying, addr 0x180495810, size 0xc0, virtual false, abstract: false, final false
inline void SetPlaying(::GlobalNamespace::SoundCue*  cue) ;

/// @brief Method SetScheduledEndTime, addr 0x1804958d0, size 0x80, virtual false, abstract: false, final false
inline bool SetScheduledEndTime(double_t  dspTime, bool  skipFadeOut) ;

/// @brief Method SetScheduledStartTime, addr 0x180495950, size 0x190, virtual false, abstract: false, final false
inline bool SetScheduledStartTime(double_t  dspTime, bool  moveEnd, bool  skipFadeOut) ;

/// @brief Method SetupAudioSource, addr 0x180495ae0, size 0x650, virtual false, abstract: false, final false
inline bool SetupAudioSource() ;

/// @brief Method SetupController, addr 0x180496130, size 0x9d0, virtual false, abstract: false, final false
inline bool SetupController(float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes, bool  virtualize) ;

/// @brief Method Stop, addr 0x180496b00, size 0x260, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method TriggerEvents, addr 0x180496d60, size 0xe0, virtual false, abstract: false, final false
inline void TriggerEvents(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, bool  clearAfter) ;

/// @brief Method VirtualizeTest, addr 0x180496e40, size 0x150, virtual false, abstract: false, final false
inline bool VirtualizeTest() ;

/// @brief Method WakeUp, addr 0x180497230, size 0xb0, virtual false, abstract: false, final false
inline bool WakeUp(bool  immediate) ;

/// @brief Method WakeUpInternal, addr 0x180496f90, size 0x190, virtual false, abstract: false, final false
inline bool WakeUpInternal(bool  immediate) ;

/// @brief Method WakeUp_Attenuation, addr 0x180497120, size 0x70, virtual false, abstract: false, final false
inline void WakeUp_Attenuation() ;

/// @brief Method WakeUp_VoiceLimiting, addr 0x180497190, size 0xa0, virtual false, abstract: false, final false
inline bool WakeUp_VoiceLimiting(bool  immediate) ;

constexpr bool const& __cordl_internal_get__Hibernated_Attenuation_k__BackingField() const;

constexpr bool& __cordl_internal_get__Hibernated_Attenuation_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Hibernated_Forced_k__BackingField() const;

constexpr bool& __cordl_internal_get__Hibernated_Forced_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Hibernated_VoiceLimiting_k__BackingField() const;

constexpr bool& __cordl_internal_get__Hibernated_VoiceLimiting_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Priority_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Priority_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RTPC_k__BackingField() const;

constexpr bool& __cordl_internal_get__RTPC_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ScriptablePan_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ScriptablePan_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ScriptablePitch_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ScriptablePitch_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ScriptableSpatialBlend_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ScriptableSpatialBlend_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ScriptableSpread_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ScriptableSpread_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ScriptableVolume_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ScriptableVolume_k__BackingField() ;

constexpr ::GlobalNamespace::AudioSourceController_AudioState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::GlobalNamespace::AudioSourceController_AudioState& __cordl_internal_get__State_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__SyncPitchMultiplier_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SyncPitchMultiplier_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UpdatingAttenuation_k__BackingField() const;

constexpr bool& __cordl_internal_get__UpdatingAttenuation_k__BackingField() ;

constexpr ::GlobalNamespace::IAudioRTPCXProvider* const& __cordl_internal_get__XProvider_k__BackingField() const;

constexpr ::GlobalNamespace::IAudioRTPCXProvider*& __cordl_internal_get__XProvider_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__attenuationVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__attenuationVol() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__audioSettingsVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__audioSettingsVol() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceRefs> const& __cordl_internal_get__audioSourceRefs() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceRefs>& __cordl_internal_get__audioSourceRefs() ;

constexpr ::UnityW<::GlobalNamespace::AudioBus> const& __cordl_internal_get__bus() const;

constexpr ::UnityW<::GlobalNamespace::AudioBus>& __cordl_internal_get__bus() ;

constexpr bool const& __cordl_internal_get__bypassFilters() const;

constexpr bool& __cordl_internal_get__bypassFilters() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cachedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cachedTransform() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>* const& __cordl_internal_get__chainOfVolume() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>*& __cordl_internal_get__chainOfVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__clip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__clip() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get__currentCue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get__currentCue() ;

constexpr float_t const& __cordl_internal_get__doppler() const;

constexpr float_t& __cordl_internal_get__doppler() ;

constexpr float_t const& __cordl_internal_get__fadeTimer() const;

constexpr float_t& __cordl_internal_get__fadeTimer() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__fadeVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__fadeVol() ;

constexpr ::UnityW<::GlobalNamespace::AudioFilterMixer> const& __cordl_internal_get__filterMixer() const;

constexpr ::UnityW<::GlobalNamespace::AudioFilterMixer>& __cordl_internal_get__filterMixer() ;

constexpr bool const& __cordl_internal_get__filterSynthesizerMode() const;

constexpr bool& __cordl_internal_get__filterSynthesizerMode() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>* const& __cordl_internal_get__filters() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*& __cordl_internal_get__filters() ;

constexpr float_t const& __cordl_internal_get__finalVolume() const;

constexpr float_t& __cordl_internal_get__finalVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followTransform() ;

constexpr ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>* const& __cordl_internal_get__getXFunc() const;

constexpr ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*& __cordl_internal_get__getXFunc() ;

constexpr float_t const& __cordl_internal_get__hibernationFadeTimer() const;

constexpr float_t& __cordl_internal_get__hibernationFadeTimer() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__hibernationVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__hibernationVol() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr float_t const& __cordl_internal_get__lastPlayHead() const;

constexpr float_t& __cordl_internal_get__lastPlayHead() ;

constexpr bool const& __cordl_internal_get__loop() const;

constexpr bool& __cordl_internal_get__loop() ;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionBase> const& __cordl_internal_get__occlusion() const;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionBase>& __cordl_internal_get__occlusion() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& __cordl_internal_get__onFadeOut() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& __cordl_internal_get__onFadeOut() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& __cordl_internal_get__onHibernate() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& __cordl_internal_get__onHibernate() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& __cordl_internal_get__onPause() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& __cordl_internal_get__onPause() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& __cordl_internal_get__onPlay() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& __cordl_internal_get__onPlay() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& __cordl_internal_get__onStop() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& __cordl_internal_get__onStop() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& __cordl_internal_get__onWakeUp() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& __cordl_internal_get__onWakeUp() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>* const& __cordl_internal_get__originAssets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*& __cordl_internal_get__originAssets() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__owner() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__owner() ;

constexpr float_t const& __cordl_internal_get__pan() const;

constexpr float_t& __cordl_internal_get__pan() ;

constexpr float_t const& __cordl_internal_get__pitch() const;

constexpr float_t& __cordl_internal_get__pitch() ;

constexpr float_t const& __cordl_internal_get__playHead() const;

constexpr float_t& __cordl_internal_get__playHead() ;

constexpr float_t const& __cordl_internal_get__playHeadOffset() const;

constexpr float_t& __cordl_internal_get__playHeadOffset() ;

constexpr double_t const& __cordl_internal_get__playedDSPTime() const;

constexpr double_t& __cordl_internal_get__playedDSPTime() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__rtpcVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__rtpcVol() ;

constexpr double_t const& __cordl_internal_get__scheduledEndDSPTime() const;

constexpr double_t& __cordl_internal_get__scheduledEndDSPTime() ;

constexpr double_t const& __cordl_internal_get__scheduledStartDSPTime() const;

constexpr double_t& __cordl_internal_get__scheduledStartDSPTime() ;

constexpr float_t const& __cordl_internal_get__spatialBlend() const;

constexpr float_t& __cordl_internal_get__spatialBlend() ;

constexpr float_t const& __cordl_internal_get__spread() const;

constexpr float_t& __cordl_internal_get__spread() ;

constexpr float_t const& __cordl_internal_get__targetFadeInTime() const;

constexpr float_t& __cordl_internal_get__targetFadeInTime() ;

constexpr float_t const& __cordl_internal_get__targetFadeOutTime() const;

constexpr float_t& __cordl_internal_get__targetFadeOutTime() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>* const& __cordl_internal_get__unityFilterWrappers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>*& __cordl_internal_get__unityFilterWrappers() ;

constexpr void __cordl_internal_set__Hibernated_Attenuation_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Hibernated_Forced_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Hibernated_VoiceLimiting_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Priority_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RTPC_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ScriptablePan_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ScriptablePitch_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ScriptableSpatialBlend_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ScriptableSpread_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ScriptableVolume_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::GlobalNamespace::AudioSourceController_AudioState  value) ;

constexpr void __cordl_internal_set__SyncPitchMultiplier_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__UpdatingAttenuation_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__XProvider_k__BackingField(::GlobalNamespace::IAudioRTPCXProvider*  value) ;

constexpr void __cordl_internal_set__attenuationVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__audioSettingsVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__audioSourceRefs(::UnityW<::GlobalNamespace::AudioSourceRefs>  value) ;

constexpr void __cordl_internal_set__bus(::UnityW<::GlobalNamespace::AudioBus>  value) ;

constexpr void __cordl_internal_set__bypassFilters(bool  value) ;

constexpr void __cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__chainOfVolume(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>*  value) ;

constexpr void __cordl_internal_set__clip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__currentCue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set__doppler(float_t  value) ;

constexpr void __cordl_internal_set__fadeTimer(float_t  value) ;

constexpr void __cordl_internal_set__fadeVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__filterMixer(::UnityW<::GlobalNamespace::AudioFilterMixer>  value) ;

constexpr void __cordl_internal_set__filterSynthesizerMode(bool  value) ;

constexpr void __cordl_internal_set__filters(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  value) ;

constexpr void __cordl_internal_set__finalVolume(float_t  value) ;

constexpr void __cordl_internal_set__followTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__getXFunc(::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  value) ;

constexpr void __cordl_internal_set__hibernationFadeTimer(float_t  value) ;

constexpr void __cordl_internal_set__hibernationVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__lastPlayHead(float_t  value) ;

constexpr void __cordl_internal_set__loop(bool  value) ;

constexpr void __cordl_internal_set__occlusion(::UnityW<::GlobalNamespace::AudioOcclusionBase>  value) ;

constexpr void __cordl_internal_set__onFadeOut(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value) ;

constexpr void __cordl_internal_set__onHibernate(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value) ;

constexpr void __cordl_internal_set__onPause(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value) ;

constexpr void __cordl_internal_set__onPlay(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value) ;

constexpr void __cordl_internal_set__onStop(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value) ;

constexpr void __cordl_internal_set__onWakeUp(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value) ;

constexpr void __cordl_internal_set__originAssets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  value) ;

constexpr void __cordl_internal_set__owner(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__pan(float_t  value) ;

constexpr void __cordl_internal_set__pitch(float_t  value) ;

constexpr void __cordl_internal_set__playHead(float_t  value) ;

constexpr void __cordl_internal_set__playHeadOffset(float_t  value) ;

constexpr void __cordl_internal_set__playedDSPTime(double_t  value) ;

constexpr void __cordl_internal_set__rtpcVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__scheduledEndDSPTime(double_t  value) ;

constexpr void __cordl_internal_set__scheduledStartDSPTime(double_t  value) ;

constexpr void __cordl_internal_set__spatialBlend(float_t  value) ;

constexpr void __cordl_internal_set__spread(float_t  value) ;

constexpr void __cordl_internal_set__targetFadeInTime(float_t  value) ;

constexpr void __cordl_internal_set__targetFadeOutTime(float_t  value) ;

constexpr void __cordl_internal_set__unityFilterWrappers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>*  value) ;

/// @brief Method .ctor, addr 0x1804972e0, size 0x360, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AttenuationVol, addr 0x180497640, size 0x20, virtual false, abstract: false, final false
inline float_t get_AttenuationVol() ;

/// @brief Method get_AudioSettingsVol, addr 0x180497660, size 0x20, virtual false, abstract: false, final false
inline float_t get_AudioSettingsVol() ;

/// @brief Method get_AudioSource, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> get_AudioSource() ;

/// @brief Method get_AudioSourceRefs, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceRefs> get_AudioSourceRefs() ;

/// @brief Method get_Bus, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioBus> get_Bus() ;

/// @brief Method get_BypassFilters, addr 0x180497680, size 0x30, virtual false, abstract: false, final false
inline bool get_BypassFilters() ;

/// @brief Method get_CachedTransform, addr 0x1804976b0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_CachedTransform() ;

/// @brief Method get_ChainOfVolume, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>* get_ChainOfVolume() ;

/// @brief Method get_Clip, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Clip() ;

/// @brief Method get_Cue, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SoundCue> get_Cue() ;

/// @brief Method get_Doppler, addr 0x180497700, size 0x10, virtual false, abstract: false, final false
inline float_t get_Doppler() ;

/// @brief Method get_FadeTimer, addr 0x1803b2f00, size 0x10, virtual false, abstract: false, final false
inline float_t get_FadeTimer() ;

/// @brief Method get_FadeVol, addr 0x180497710, size 0x20, virtual false, abstract: false, final false
inline float_t get_FadeVol() ;

/// @brief Method get_FilterMixer, addr 0x1803370d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioFilterMixer> get_FilterMixer() ;

/// @brief Method get_FilterSynthesizerMode, addr 0x180497730, size 0x10, virtual false, abstract: false, final false
inline bool get_FilterSynthesizerMode() ;

/// @brief Method get_Filters, addr 0x1803370e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>* get_Filters() ;

/// @brief Method get_FinalVolume, addr 0x180483520, size 0x10, virtual false, abstract: false, final false
inline float_t get_FinalVolume() ;

/// @brief Method get_FollowTransform, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_FollowTransform() ;

/// @brief Method get_Hibernated_Attenuation, addr 0x180497740, size 0x10, virtual false, abstract: false, final false
inline bool get_Hibernated_Attenuation() ;

/// @brief Method get_Hibernated_Forced, addr 0x180497750, size 0x10, virtual false, abstract: false, final false
inline bool get_Hibernated_Forced() ;

/// @brief Method get_Hibernated_VoiceLimiting, addr 0x180497760, size 0x10, virtual false, abstract: false, final false
inline bool get_Hibernated_VoiceLimiting() ;

/// @brief Method get_HibernationVol, addr 0x180497770, size 0x10, virtual false, abstract: false, final false
inline float_t get_HibernationVol() ;

/// @brief Method get_Initialized, addr 0x1802f1be0, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Method get_IsActuallyPlaying, addr 0x180497780, size 0x20, virtual false, abstract: false, final false
inline bool get_IsActuallyPlaying() ;

/// @brief Method get_IsFadingOut, addr 0x1804977a0, size 0x50, virtual false, abstract: false, final false
inline bool get_IsFadingOut() ;

/// @brief Method get_IsHibernating, addr 0x1804977f0, size 0xd0, virtual false, abstract: false, final false
inline bool get_IsHibernating() ;

/// @brief Method get_IsPlaying, addr 0x1804978c0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_IsScheduledToPlay, addr 0x1804978d0, size 0x40, virtual false, abstract: false, final false
inline bool get_IsScheduledToPlay() ;

/// @brief Method get_Loop, addr 0x1802e56a0, size 0x10, virtual false, abstract: false, final false
inline bool get_Loop() ;

/// @brief Method get_Occlusion, addr 0x1803370c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioOcclusionBase> get_Occlusion() ;

/// @brief Method get_OriginAssets, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>* get_OriginAssets() ;

/// @brief Method get_Owner, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_Owner() ;

/// @brief Method get_Pan, addr 0x1803826d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Pan() ;

/// @brief Method get_Pitch, addr 0x18033c2e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Pitch() ;

/// @brief Method get_PlayHead, addr 0x18040c380, size 0x10, virtual false, abstract: false, final false
inline float_t get_PlayHead() ;

/// @brief Method get_PlayHeadMoving, addr 0x180497910, size 0x20, virtual false, abstract: false, final false
inline bool get_PlayHeadMoving() ;

/// @brief Method get_PlayedDSPTime, addr 0x180497930, size 0x10, virtual false, abstract: false, final false
inline double_t get_PlayedDSPTime() ;

/// @brief Method get_Priority, addr 0x180497940, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Priority() ;

/// @brief Method get_RTPC, addr 0x180497970, size 0x10, virtual false, abstract: false, final false
inline bool get_RTPC() ;

/// @brief Method get_RTPCVol, addr 0x180497950, size 0x20, virtual false, abstract: false, final false
inline float_t get_RTPCVol() ;

/// @brief Method get_ScheduledEndDSPTime, addr 0x180497980, size 0x10, virtual false, abstract: false, final false
inline double_t get_ScheduledEndDSPTime() ;

/// @brief Method get_ScheduledStartDSPTime, addr 0x180497990, size 0x10, virtual false, abstract: false, final false
inline double_t get_ScheduledStartDSPTime() ;

/// @brief Method get_ScriptablePan, addr 0x18032ef70, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptablePan() ;

/// @brief Method get_ScriptablePitch, addr 0x1803d39c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptablePitch() ;

/// @brief Method get_ScriptableSpatialBlend, addr 0x1804979a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptableSpatialBlend() ;

/// @brief Method get_ScriptableSpread, addr 0x180371800, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptableSpread() ;

/// @brief Method get_ScriptableVolume, addr 0x1803d9950, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScriptableVolume() ;

/// @brief Method get_SpatialBlend, addr 0x1804979b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_SpatialBlend() ;

/// @brief Method get_Spread, addr 0x180352a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_Spread() ;

/// @brief Method get_State, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioSourceController_AudioState get_State() ;

/// @brief Method get_SyncPitchMultiplier, addr 0x1804979c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_SyncPitchMultiplier() ;

/// @brief Method get_TargetFadeInTime, addr 0x1804979d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TargetFadeInTime() ;

/// @brief Method get_TargetFadeOutTime, addr 0x1804979e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TargetFadeOutTime() ;

/// @brief Method get_UnityFilterWrappers, addr 0x180337120, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>* get_UnityFilterWrappers() ;

/// @brief Method get_UpdatingAttenuation, addr 0x1804979f0, size 0x10, virtual false, abstract: false, final false
inline bool get_UpdatingAttenuation() ;

/// @brief Method get_XProvider, addr 0x1803370b0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::IAudioRTPCXProvider* get_XProvider() ;

/// @brief Method get_XProviderIdentifier, addr 0x1803f5370, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_XProviderIdentifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

/// @brief Method set_BypassFilters, addr 0x180497a00, size 0x10, virtual false, abstract: false, final false
inline void set_BypassFilters(bool  value) ;

/// @brief Method set_FilterSynthesizerMode, addr 0x180497a10, size 0x50, virtual false, abstract: false, final false
inline void set_FilterSynthesizerMode(bool  value) ;

/// @brief Method set_FollowTransform, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_FollowTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_Hibernated_Attenuation, addr 0x180497a60, size 0x10, virtual false, abstract: false, final false
inline void set_Hibernated_Attenuation(bool  value) ;

/// @brief Method set_Hibernated_Forced, addr 0x180497a70, size 0x10, virtual false, abstract: false, final false
inline void set_Hibernated_Forced(bool  value) ;

/// @brief Method set_Hibernated_VoiceLimiting, addr 0x180497a80, size 0x10, virtual false, abstract: false, final false
inline void set_Hibernated_VoiceLimiting(bool  value) ;

/// @brief Method set_Priority, addr 0x180497a90, size 0x10, virtual false, abstract: false, final false
inline void set_Priority(int32_t  value) ;

/// @brief Method set_RTPC, addr 0x180497aa0, size 0x10, virtual false, abstract: false, final false
inline void set_RTPC(bool  value) ;

/// @brief Method set_ScriptablePan, addr 0x1803d9990, size 0x10, virtual false, abstract: false, final false
inline void set_ScriptablePan(float_t  value) ;

/// @brief Method set_ScriptablePitch, addr 0x1803d3a30, size 0x10, virtual false, abstract: false, final false
inline void set_ScriptablePitch(float_t  value) ;

/// @brief Method set_ScriptableSpatialBlend, addr 0x180497ab0, size 0x10, virtual false, abstract: false, final false
inline void set_ScriptableSpatialBlend(float_t  value) ;

/// @brief Method set_ScriptableSpread, addr 0x180497ac0, size 0x10, virtual false, abstract: false, final false
inline void set_ScriptableSpread(float_t  value) ;

/// @brief Method set_ScriptableVolume, addr 0x1803d99d0, size 0x10, virtual false, abstract: false, final false
inline void set_ScriptableVolume(float_t  value) ;

/// @brief Method set_State, addr 0x1803d75f0, size 0x10, virtual false, abstract: false, final false
inline void set_State(::GlobalNamespace::AudioSourceController_AudioState  value) ;

/// @brief Method set_SyncPitchMultiplier, addr 0x180497ad0, size 0x10, virtual false, abstract: false, final false
inline void set_SyncPitchMultiplier(float_t  value) ;

/// @brief Method set_UpdatingAttenuation, addr 0x180497ae0, size 0x200, virtual false, abstract: false, final false
inline void set_UpdatingAttenuation(bool  value) ;

/// @brief Method set_XProvider, addr 0x180337150, size 0x20, virtual false, abstract: false, final false
inline void set_XProvider(::GlobalNamespace::IAudioRTPCXProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSourceController(AudioSourceController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSourceController(AudioSourceController const& ) = delete;

/// @brief Field HIBERNATE_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  HIBERNATE_THRESHOLD{static_cast<float_t>(0.001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17581};

/// @brief Field _cachedTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cachedTransform;

/// @brief Field _initialized, offset: 0x28, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// @brief Field _audioSourceRefs, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceRefs>  ____audioSourceRefs;

/// @brief Field _currentCue, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ____currentCue;

/// @brief Field _originAssets, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  ____originAssets;

/// @brief Field <State>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::AudioSourceController_AudioState  ____State_k__BackingField;

/// @brief Field <Priority>k__BackingField, offset: 0x54, size: 0x4, def value: None
 int32_t  ____Priority_k__BackingField;

/// @brief Field _chainOfVolume, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>*  ____chainOfVolume;

/// @brief Field _owner, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____owner;

/// @brief Field _followTransform, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____followTransform;

/// @brief Field _clip, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____clip;

/// @brief Field _bus, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioBus>  ____bus;

/// @brief Field _loop, offset: 0x80, size: 0x1, def value: None
 bool  ____loop;

/// @brief Field _finalVolume, offset: 0x84, size: 0x4, def value: None
 float_t  ____finalVolume;

/// @brief Field _attenuationVol, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____attenuationVol;

/// @brief Field _fadeVol, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____fadeVol;

/// @brief Field _rtpcVol, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____rtpcVol;

/// @brief Field _hibernationVol, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____hibernationVol;

/// @brief Field _audioSettingsVol, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____audioSettingsVol;

/// @brief Field <ScriptableVolume>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 float_t  ____ScriptableVolume_k__BackingField;

/// @brief Field _pitch, offset: 0xb4, size: 0x4, def value: None
 float_t  ____pitch;

/// @brief Field <ScriptablePitch>k__BackingField, offset: 0xb8, size: 0x4, def value: None
 float_t  ____ScriptablePitch_k__BackingField;

/// @brief Field _pan, offset: 0xbc, size: 0x4, def value: None
 float_t  ____pan;

/// @brief Field <ScriptablePan>k__BackingField, offset: 0xc0, size: 0x4, def value: None
 float_t  ____ScriptablePan_k__BackingField;

/// @brief Field _spatialBlend, offset: 0xc4, size: 0x4, def value: None
 float_t  ____spatialBlend;

/// @brief Field <ScriptableSpatialBlend>k__BackingField, offset: 0xc8, size: 0x4, def value: None
 float_t  ____ScriptableSpatialBlend_k__BackingField;

/// @brief Field _spread, offset: 0xcc, size: 0x4, def value: None
 float_t  ____spread;

/// @brief Field <ScriptableSpread>k__BackingField, offset: 0xd0, size: 0x4, def value: None
 float_t  ____ScriptableSpread_k__BackingField;

/// @brief Field _doppler, offset: 0xd4, size: 0x4, def value: None
 float_t  ____doppler;

/// @brief Field _playHead, offset: 0xd8, size: 0x4, def value: None
 float_t  ____playHead;

/// @brief Field _playHeadOffset, offset: 0xdc, size: 0x4, def value: None
 float_t  ____playHeadOffset;

/// @brief Field _lastPlayHead, offset: 0xe0, size: 0x4, def value: None
 float_t  ____lastPlayHead;

/// @brief Field _fadeTimer, offset: 0xe4, size: 0x4, def value: None
 float_t  ____fadeTimer;

/// @brief Field _targetFadeInTime, offset: 0xe8, size: 0x4, def value: None
 float_t  ____targetFadeInTime;

/// @brief Field _targetFadeOutTime, offset: 0xec, size: 0x4, def value: None
 float_t  ____targetFadeOutTime;

/// @brief Field _scheduledStartDSPTime, offset: 0xf0, size: 0x8, def value: None
 double_t  ____scheduledStartDSPTime;

/// @brief Field _scheduledEndDSPTime, offset: 0xf8, size: 0x8, def value: None
 double_t  ____scheduledEndDSPTime;

/// @brief Field _playedDSPTime, offset: 0x100, size: 0x8, def value: None
 double_t  ____playedDSPTime;

/// @brief Field _occlusion, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusionBase>  ____occlusion;

/// @brief Field _filterMixer, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioFilterMixer>  ____filterMixer;

/// @brief Field _filters, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  ____filters;

/// @brief Field _unityFilterWrappers, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>*  ____unityFilterWrappers;

/// @brief Field _filterSynthesizerMode, offset: 0x128, size: 0x1, def value: None
 bool  ____filterSynthesizerMode;

/// @brief Field _bypassFilters, offset: 0x129, size: 0x1, def value: None
 bool  ____bypassFilters;

/// @brief Field <SyncPitchMultiplier>k__BackingField, offset: 0x12c, size: 0x4, def value: None
 float_t  ____SyncPitchMultiplier_k__BackingField;

/// @brief Field <XProvider>k__BackingField, offset: 0x130, size: 0x8, def value: None
 ::GlobalNamespace::IAudioRTPCXProvider*  ____XProvider_k__BackingField;

/// @brief Field <RTPC>k__BackingField, offset: 0x138, size: 0x1, def value: None
 bool  ____RTPC_k__BackingField;

/// @brief Field <UpdatingAttenuation>k__BackingField, offset: 0x139, size: 0x1, def value: None
 bool  ____UpdatingAttenuation_k__BackingField;

/// @brief Field <Hibernated_VoiceLimiting>k__BackingField, offset: 0x13a, size: 0x1, def value: None
 bool  ____Hibernated_VoiceLimiting_k__BackingField;

/// @brief Field <Hibernated_Forced>k__BackingField, offset: 0x13b, size: 0x1, def value: None
 bool  ____Hibernated_Forced_k__BackingField;

/// @brief Field <Hibernated_Attenuation>k__BackingField, offset: 0x13c, size: 0x1, def value: None
 bool  ____Hibernated_Attenuation_k__BackingField;

/// @brief Field _hibernationFadeTimer, offset: 0x140, size: 0x4, def value: None
 float_t  ____hibernationFadeTimer;

/// @brief Field _getXFunc, offset: 0x148, size: 0x8, def value: None
 ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  ____getXFunc;

/// @brief Field _onStop, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  ____onStop;

/// @brief Field _onFadeOut, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  ____onFadeOut;

/// @brief Field _onPlay, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  ____onPlay;

/// @brief Field _onPause, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  ____onPause;

/// @brief Field _onHibernate, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  ____onHibernate;

/// @brief Field _onWakeUp, offset: 0x178, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  ____onWakeUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____cachedTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____initialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____audioSourceRefs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____currentCue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____originAssets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____State_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____Priority_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____chainOfVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____owner) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____followTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____clip) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____bus) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____loop) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____finalVolume) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____attenuationVol) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____fadeVol) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____rtpcVol) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____hibernationVol) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____audioSettingsVol) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____ScriptableVolume_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____pitch) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____ScriptablePitch_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____pan) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____ScriptablePan_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____spatialBlend) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____ScriptableSpatialBlend_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____spread) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____ScriptableSpread_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____doppler) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____playHead) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____playHeadOffset) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____lastPlayHead) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____fadeTimer) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____targetFadeInTime) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____targetFadeOutTime) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____scheduledStartDSPTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____scheduledEndDSPTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____playedDSPTime) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____occlusion) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____filterMixer) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____filters) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____unityFilterWrappers) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____filterSynthesizerMode) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____bypassFilters) == 0x129, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____SyncPitchMultiplier_k__BackingField) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____XProvider_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____RTPC_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____UpdatingAttenuation_k__BackingField) == 0x139, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____Hibernated_VoiceLimiting_k__BackingField) == 0x13a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____Hibernated_Forced_k__BackingField) == 0x13b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____Hibernated_Attenuation_k__BackingField) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____hibernationFadeTimer) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____getXFunc) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____onStop) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____onFadeOut) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____onPlay) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____onPause) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____onHibernate) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceController, ____onWakeUp) == 0x178, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSourceController) == 0x180, "Size mismatch!");

} // namespace end def GlobalNamespace
