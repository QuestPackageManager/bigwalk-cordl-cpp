#pragma once
// IWYU pragma private; include "Dissonance/Demo/ChatLogController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ChatLogController)
namespace Dissonance::Demo {
class ChatLogController_ChatLogEntry;
}
namespace Dissonance::Networking {
struct TextMessage;
}
namespace Dissonance {
class DissonanceComms;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Dissonance::Demo {
class ChatLogController;
}
namespace Dissonance::Demo {
class ChatLogController_ChatLogEntry;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::ChatLogController*);
MARK_REF_T(::Dissonance::Demo::ChatLogController_ChatLogEntry*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::ChatLogController*, "Dissonance.Demo", "ChatLogController");
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::ChatLogController_ChatLogEntry*, "Dissonance.Demo", "ChatLogController/ChatLogEntry");
// Dependencies System.Object
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.ChatLogController/ChatLogEntry
class CORDL_TYPE ChatLogController_ChatLogEntry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsTransitionComplete, put=set_IsTransitionComplete)) bool  IsTransitionComplete;

 __declspec(property(get=get_IsTransitioningOut, put=set_IsTransitioningOut)) bool  IsTransitioningOut;

 __declspec(property(get=get_Object)) ::UnityW<::UnityEngine::GameObject>  Object;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::RectTransform>  Transform;

/// @brief Field <IsTransitionComplete>k__BackingField, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsTransitionComplete_k__BackingField, put=__cordl_internal_set__IsTransitionComplete_k__BackingField)) bool  _IsTransitionComplete_k__BackingField;

/// @brief Field <IsTransitioningOut>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsTransitioningOut_k__BackingField, put=__cordl_internal_set__IsTransitioningOut_k__BackingField)) bool  _IsTransitioningOut_k__BackingField;

/// @brief Field _transform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::RectTransform>  _transform;

/// @brief Field _transitionProgress, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__transitionProgress, put=__cordl_internal_set__transitionProgress)) float_t  _transitionProgress;

/// @brief Field _txt, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__txt, put=__cordl_internal_set__txt)) ::UnityW<::UnityEngine::UI::Text>  _txt;

/// @brief Method FadeOut, addr 0x180376410, size 0x10, virtual false, abstract: false, final false
inline void FadeOut() ;

static inline ::Dissonance::Demo::ChatLogController_ChatLogEntry* New_ctor(::UnityEngine::UI::Text*  txt) ;

/// @brief Method Update, addr 0x1805c63c0, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__IsTransitionComplete_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsTransitionComplete_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsTransitioningOut_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsTransitioningOut_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__transform() ;

constexpr float_t const& __cordl_internal_get__transitionProgress() const;

constexpr float_t& __cordl_internal_get__transitionProgress() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__txt() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__txt() ;

constexpr void __cordl_internal_set__IsTransitionComplete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsTransitioningOut_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__transitionProgress(float_t  value) ;

constexpr void __cordl_internal_set__txt(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x1805c6500, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UI::Text*  txt) ;

/// @brief Method get_IsTransitionComplete, addr 0x1803a74f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsTransitionComplete() ;

/// @brief Method get_IsTransitioningOut, addr 0x1803a7470, size 0x10, virtual false, abstract: false, final false
inline bool get_IsTransitioningOut() ;

/// @brief Method get_Object, addr 0x1805c6550, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_Object() ;

/// @brief Method get_Transform, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_Transform() ;

/// @brief Method set_IsTransitionComplete, addr 0x1803a7500, size 0x10, virtual false, abstract: false, final false
inline void set_IsTransitionComplete(bool  value) ;

/// @brief Method set_IsTransitioningOut, addr 0x1803a74c0, size 0x10, virtual false, abstract: false, final false
inline void set_IsTransitioningOut(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatLogController_ChatLogEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatLogController_ChatLogEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatLogController_ChatLogEntry(ChatLogController_ChatLogEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatLogController_ChatLogEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatLogController_ChatLogEntry(ChatLogController_ChatLogEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16845};

/// @brief Field _txt, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____txt;

/// @brief Field _transform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____transform;

/// @brief Field _transitionProgress, offset: 0x20, size: 0x4, def value: None
 float_t  ____transitionProgress;

/// @brief Field <IsTransitioningOut>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____IsTransitioningOut_k__BackingField;

/// @brief Field <IsTransitionComplete>k__BackingField, offset: 0x25, size: 0x1, def value: None
 bool  ____IsTransitionComplete_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::ChatLogController_ChatLogEntry, ____txt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController_ChatLogEntry, ____transform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController_ChatLogEntry, ____transitionProgress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController_ChatLogEntry, ____IsTransitioningOut_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController_ChatLogEntry, ____IsTransitionComplete_k__BackingField) == 0x25, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::ChatLogController_ChatLogEntry) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Demo
// Dependencies System.DateTime, UnityEngine.MonoBehaviour
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.ChatLogController
class CORDL_TYPE ChatLogController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ChatLogEntry = ::Dissonance::Demo::ChatLogController_ChatLogEntry;

/// @brief Field Comms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Comms, put=__cordl_internal_set_Comms)) ::UnityW<::Dissonance::DissonanceComms>  Comms;

 __declspec(property(get=get_ForceShow, put=set_ForceShow)) bool  ForceShow;

/// @brief Field <ForceShow>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceShow_k__BackingField, put=__cordl_internal_set__ForceShow_k__BackingField)) bool  _ForceShow_k__BackingField;

/// @brief Field _canvas, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::CanvasGroup>  _canvas;

/// @brief Field _entries, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__entries, put=__cordl_internal_set__entries)) ::System::Collections::Generic::Queue_1<::Dissonance::Demo::ChatLogController_ChatLogEntry*>*  _entries;

/// @brief Field _fadeOutStartTime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeOutStartTime, put=__cordl_internal_set__fadeOutStartTime)) ::System::DateTime  _fadeOutStartTime;

/// @brief Field _heightLimit, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__heightLimit, put=__cordl_internal_set__heightLimit)) float_t  _heightLimit;

/// @brief Field _textPrototype, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__textPrototype, put=__cordl_internal_set__textPrototype)) ::UnityW<::UnityEngine::GameObject>  _textPrototype;

/// @brief Method AddMessage, addr 0x1805c5ab0, size 0x360, virtual false, abstract: false, final false
inline void AddMessage(::StringW  message, ::UnityEngine::Color  color) ;

static inline ::Dissonance::Demo::ChatLogController* New_ctor() ;

/// @brief Method OnMessageReceived, addr 0x1805c5e10, size 0xd0, virtual false, abstract: false, final false
inline void OnMessageReceived(::Dissonance::Networking::TextMessage  message) ;

/// @brief Method ShowFor, addr 0x1805c5ee0, size 0x40, virtual false, abstract: false, final false
inline void ShowFor(::System::TimeSpan  time) ;

/// @brief Method Start, addr 0x1805c5f20, size 0x1b0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1805c60d0, size 0x2a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Dissonance::DissonanceComms> const& __cordl_internal_get_Comms() const;

constexpr ::UnityW<::Dissonance::DissonanceComms>& __cordl_internal_get_Comms() ;

constexpr bool const& __cordl_internal_get__ForceShow_k__BackingField() const;

constexpr bool& __cordl_internal_get__ForceShow_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvas() ;

constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Demo::ChatLogController_ChatLogEntry*>* const& __cordl_internal_get__entries() const;

constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Demo::ChatLogController_ChatLogEntry*>*& __cordl_internal_get__entries() ;

constexpr ::System::DateTime const& __cordl_internal_get__fadeOutStartTime() const;

constexpr ::System::DateTime& __cordl_internal_get__fadeOutStartTime() ;

constexpr float_t const& __cordl_internal_get__heightLimit() const;

constexpr float_t& __cordl_internal_get__heightLimit() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__textPrototype() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__textPrototype() ;

constexpr void __cordl_internal_set_Comms(::UnityW<::Dissonance::DissonanceComms>  value) ;

constexpr void __cordl_internal_set__ForceShow_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set__entries(::System::Collections::Generic::Queue_1<::Dissonance::Demo::ChatLogController_ChatLogEntry*>*  value) ;

constexpr void __cordl_internal_set__fadeOutStartTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__heightLimit(float_t  value) ;

constexpr void __cordl_internal_set__textPrototype(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1805c6370, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ForceShow, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_ForceShow() ;

/// @brief Method set_ForceShow, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void set_ForceShow(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatLogController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatLogController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatLogController(ChatLogController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatLogController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatLogController(ChatLogController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16846};

/// @brief Field Comms, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Dissonance::DissonanceComms>  ___Comms;

/// @brief Field _textPrototype, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____textPrototype;

/// @brief Field _canvas, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ____canvas;

/// @brief Field _heightLimit, offset: 0x38, size: 0x4, def value: None
 float_t  ____heightLimit;

/// @brief Field _entries, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Dissonance::Demo::ChatLogController_ChatLogEntry*>*  ____entries;

/// @brief Field <ForceShow>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____ForceShow_k__BackingField;

/// @brief Field _fadeOutStartTime, offset: 0x50, size: 0x8, def value: None
 ::System::DateTime  ____fadeOutStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::ChatLogController, ___Comms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController, ____textPrototype) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController, ____canvas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController, ____heightLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController, ____entries) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController, ____ForceShow_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatLogController, ____fadeOutStartTime) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::ChatLogController) == 0x58, "Size mismatch!");

} // namespace end def Dissonance::Demo
