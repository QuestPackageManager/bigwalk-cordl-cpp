#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsJoint_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsEvents)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_BodyUpdateEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactBeginEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactEndEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactFilterEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_JointThresholdEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsEvents_PreSimulateEventHandler;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_PreSolveEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_TriggerBeginEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_TriggerEndEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsJoint;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape_ContactId;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShape;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsTransform;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsEvents_PreSimulateEventHandler;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_BodyUpdateEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactBeginEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactEndEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_ContactFilterEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_JointThresholdEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_PreSolveEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_TriggerBeginEvent;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsEvents_TriggerEndEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/PreSimulateEventHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/BodyUpdateEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/ContactBeginEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/ContactEndEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/ContactFilterEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/JointThresholdEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/PreSolveEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/TriggerBeginEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent, "UnityEngine.LowLevelPhysics2D", "PhysicsEvents/TriggerEndEvent");
// Dependencies System.IntPtr, UnityEngine.LowLevelPhysics2D.PhysicsBody, UnityEngine.LowLevelPhysics2D.PhysicsTransform
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/BodyUpdateEvent
struct CORDL_TYPE PhysicsEvents_BodyUpdateEvent {
public:
// Declarations
 __declspec(property(get=get_body)) ::UnityEngine::LowLevelPhysics2D::PhysicsBody  body;

 __declspec(property(get=get_fellAsleep)) bool  fellAsleep;

 __declspec(property(get=get_transform)) ::UnityEngine::LowLevelPhysics2D::PhysicsTransform  transform;

/// @brief Method ToString, addr 0x1822f0360, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_body, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody get_body() ;

/// @brief Method get_fellAsleep, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_fellAsleep() ;

/// @brief Method get_transform, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsTransform get_transform() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_BodyUpdateEvent() ;

// Ctor Parameters [CppParam { name: "m_UserData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None }, CppParam { name: "m_Body", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: None }, CppParam { name: "m_FellAsleep", ty: "bool", modifiers: "", def_value: None }]
constexpr PhysicsEvents_BodyUpdateEvent(::System::IntPtr  m_UserData, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform  m_Transform, ::UnityEngine::LowLevelPhysics2D::PhysicsBody  m_Body, bool  m_FellAsleep) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_UserData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_UserData;

/// @brief Field m_Transform, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsTransform  m_Transform;

/// @brief Field m_Body, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsBody  m_Body;

/// @brief Field m_FellAsleep, offset: 0x20, size: 0x1, def value: None
 bool  m_FellAsleep;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent, m_UserData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent, m_Transform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent, m_Body) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent, m_FellAsleep) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsShape
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/TriggerBeginEvent
struct CORDL_TYPE PhysicsEvents_TriggerBeginEvent {
public:
// Declarations
 __declspec(property(get=get_triggerShape)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  triggerShape;

 __declspec(property(get=get_visitorShape)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  visitorShape;

/// @brief Method ToString, addr 0x1822faf00, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_triggerShape, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_triggerShape() ;

/// @brief Method get_visitorShape, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_visitorShape() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_TriggerBeginEvent() ;

// Ctor Parameters [CppParam { name: "m_TriggerShape", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_VisitorShape", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }]
constexpr PhysicsEvents_TriggerBeginEvent(::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_TriggerShape, ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_VisitorShape) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19844};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_TriggerShape, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_TriggerShape;

/// @brief Field m_VisitorShape, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_VisitorShape;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent, m_TriggerShape) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent, m_VisitorShape) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsShape
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/TriggerEndEvent
struct CORDL_TYPE PhysicsEvents_TriggerEndEvent {
public:
// Declarations
 __declspec(property(get=get_triggerShape)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  triggerShape;

 __declspec(property(get=get_visitorShape)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  visitorShape;

/// @brief Method ToString, addr 0x1822fb050, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_triggerShape, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_triggerShape() ;

/// @brief Method get_visitorShape, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_visitorShape() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_TriggerEndEvent() ;

// Ctor Parameters [CppParam { name: "m_TriggerShape", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_VisitorShape", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }]
constexpr PhysicsEvents_TriggerEndEvent(::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_TriggerShape, ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_VisitorShape) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_TriggerShape, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_TriggerShape;

/// @brief Field m_VisitorShape, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_VisitorShape;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent, m_TriggerShape) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent, m_VisitorShape) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsShape, UnityEngine.LowLevelPhysics2D.PhysicsShape::ContactId
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/ContactBeginEvent
struct CORDL_TYPE PhysicsEvents_ContactBeginEvent {
public:
// Declarations
 __declspec(property(get=get_contactId)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId  contactId;

 __declspec(property(get=get_shapeA)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  shapeA;

 __declspec(property(get=get_shapeB)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  shapeB;

/// @brief Method ToString, addr 0x1822f0fe0, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_contactId, addr 0x1802f80b0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId get_contactId() ;

/// @brief Method get_shapeA, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_shapeA() ;

/// @brief Method get_shapeB, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_shapeB() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_ContactBeginEvent() ;

// Ctor Parameters [CppParam { name: "m_ShapeA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_ShapeB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_ContactId", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId", modifiers: "", def_value: None }]
constexpr PhysicsEvents_ContactBeginEvent(::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeA, ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeB, ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId  m_ContactId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19846};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field m_ShapeA, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeA;

/// @brief Field m_ShapeB, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeB;

/// @brief Field m_ContactId, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId  m_ContactId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent, m_ShapeA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent, m_ShapeB) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent, m_ContactId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent) == 0x1c, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsShape, UnityEngine.LowLevelPhysics2D.PhysicsShape::ContactId
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/ContactEndEvent
struct CORDL_TYPE PhysicsEvents_ContactEndEvent {
public:
// Declarations
 __declspec(property(get=get_contactId)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId  contactId;

 __declspec(property(get=get_shapeA)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  shapeA;

 __declspec(property(get=get_shapeB)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  shapeB;

/// @brief Method ToString, addr 0x1822f1220, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_contactId, addr 0x1802f80b0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId get_contactId() ;

/// @brief Method get_shapeA, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_shapeA() ;

/// @brief Method get_shapeB, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_shapeB() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_ContactEndEvent() ;

// Ctor Parameters [CppParam { name: "m_ShapeA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_ShapeB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_ContactId", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId", modifiers: "", def_value: None }]
constexpr PhysicsEvents_ContactEndEvent(::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeA, ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeB, ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId  m_ContactId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19847};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field m_ShapeA, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeA;

/// @brief Field m_ShapeB, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeB;

/// @brief Field m_ContactId, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId  m_ContactId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent, m_ShapeA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent, m_ShapeB) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent, m_ContactId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent) == 0x1c, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsShape, UnityEngine.LowLevelPhysics2D.PhysicsWorld
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/ContactFilterEvent
struct CORDL_TYPE PhysicsEvents_ContactFilterEvent {
public:
// Declarations
 __declspec(property(get=get_physicsWorld)) ::UnityEngine::LowLevelPhysics2D::PhysicsWorld  physicsWorld;

 __declspec(property(get=get_shapeA)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  shapeA;

 __declspec(property(get=get_shapeB)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  shapeB;

/// @brief Method ToString, addr 0x1822f1530, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_physicsWorld, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorld get_physicsWorld() ;

/// @brief Method get_shapeA, addr 0x180a177e0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_shapeA() ;

/// @brief Method get_shapeB, addr 0x1803bda10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_shapeB() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_ContactFilterEvent() ;

// Ctor Parameters [CppParam { name: "m_PhysicsWorld", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld", modifiers: "", def_value: None }, CppParam { name: "m_ShapeA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_ShapeB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }]
constexpr PhysicsEvents_ContactFilterEvent(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  m_PhysicsWorld, ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeA, ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeB) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_PhysicsWorld, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsWorld  m_PhysicsWorld;

/// @brief Field m_ShapeA, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeA;

/// @brief Field m_ShapeB, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent, m_PhysicsWorld) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent, m_ShapeA) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent, m_ShapeB) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent) == 0x14, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsShape, UnityEngine.LowLevelPhysics2D.PhysicsWorld, UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/PreSolveEvent
struct CORDL_TYPE PhysicsEvents_PreSolveEvent {
public:
// Declarations
 __declspec(property(get=get_normal)) ::UnityEngine::Vector2  normal;

 __declspec(property(get=get_physicsWorld)) ::UnityEngine::LowLevelPhysics2D::PhysicsWorld  physicsWorld;

 __declspec(property(get=get_point)) ::UnityEngine::Vector2  point;

 __declspec(property(get=get_shapeA)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  shapeA;

 __declspec(property(get=get_shapeB)) ::UnityEngine::LowLevelPhysics2D::PhysicsShape  shapeB;

/// @brief Method ToString, addr 0x1822fa550, size 0x120, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_normal, addr 0x1812ea730, size 0xea90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_normal() ;

/// @brief Method get_physicsWorld, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorld get_physicsWorld() ;

/// @brief Method get_point, addr 0x180346a90, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_point() ;

/// @brief Method get_shapeA, addr 0x180a177e0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_shapeA() ;

/// @brief Method get_shapeB, addr 0x1803bda10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape get_shapeB() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_PreSolveEvent() ;

// Ctor Parameters [CppParam { name: "m_PhysicsWorld", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld", modifiers: "", def_value: None }, CppParam { name: "m_ShapeA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_ShapeB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: None }, CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr PhysicsEvents_PreSolveEvent(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  m_PhysicsWorld, ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeA, ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeB, ::UnityEngine::Vector2  m_Point, ::UnityEngine::Vector2  m_Normal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19849};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field m_PhysicsWorld, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsWorld  m_PhysicsWorld;

/// @brief Field m_ShapeA, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeA;

/// @brief Field m_ShapeB, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsShape  m_ShapeB;

/// @brief Field m_Point, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_Point;

/// @brief Field m_Normal, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_Normal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent, m_PhysicsWorld) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent, m_ShapeA) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent, m_ShapeB) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent, m_Point) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent, m_Normal) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent) == 0x24, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies System.IntPtr, UnityEngine.LowLevelPhysics2D.PhysicsJoint
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/JointThresholdEvent
struct CORDL_TYPE PhysicsEvents_JointThresholdEvent {
public:
// Declarations
 __declspec(property(get=get_joint)) ::UnityEngine::LowLevelPhysics2D::PhysicsJoint  joint;

/// @brief Method ToString, addr 0x1822f21c0, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_joint, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LowLevelPhysics2D::PhysicsJoint get_joint() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_JointThresholdEvent() ;

// Ctor Parameters [CppParam { name: "m_Joint", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsJoint", modifiers: "", def_value: None }, CppParam { name: "m_UserData", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PhysicsEvents_JointThresholdEvent(::UnityEngine::LowLevelPhysics2D::PhysicsJoint  m_Joint, ::System::IntPtr  m_UserData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19850};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Joint, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::LowLevelPhysics2D::PhysicsJoint  m_Joint;

/// @brief Field m_UserData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent, m_Joint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent, m_UserData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies System.MulticastDelegate
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents/PreSimulateEventHandler
class CORDL_TYPE PhysicsEvents_PreSimulateEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  world, float_t  deltaTime) ;

static inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1822fa4a0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents_PreSimulateEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsEvents_PreSimulateEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsEvents_PreSimulateEventHandler(PhysicsEvents_PreSimulateEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsEvents_PreSimulateEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsEvents_PreSimulateEventHandler(PhysicsEvents_PreSimulateEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19851};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
// Dependencies 
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsEvents
#pragma pack(push, 0)
struct CORDL_TYPE PhysicsEvents {
public:
// Declarations
using BodyUpdateEvent = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent;

using ContactBeginEvent = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent;

using ContactEndEvent = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent;

using ContactFilterEvent = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent;

using JointThresholdEvent = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent;

using PreSimulateEventHandler = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler;

using PreSolveEvent = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent;

using TriggerBeginEvent = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent;

using TriggerEndEvent = ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent;

/// @brief Field s_PostSimulate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PostSimulate, put=setStaticF_s_PostSimulate)) ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*  s_PostSimulate;

/// @brief Field s_PreSimulate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PreSimulate, put=setStaticF_s_PreSimulate)) ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*  s_PreSimulate;

/// @brief Method InvokePostSimulate, addr 0x1822f3f10, size 0x50, virtual false, abstract: false, final false
static inline void InvokePostSimulate(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  world, float_t  deltaTime) ;

/// @brief Method InvokePreSimulate, addr 0x1822f3f60, size 0x50, virtual false, abstract: false, final false
static inline void InvokePreSimulate(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  world, float_t  deltaTime) ;

/// @brief Method SendBodyUpdateCallbacks, addr 0x1822f3fb0, size 0x20, virtual false, abstract: false, final false
static inline void SendBodyUpdateCallbacks(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  world) ;

/// @brief Method SendContactCallbacks, addr 0x1822f3fd0, size 0x20, virtual false, abstract: false, final false
static inline void SendContactCallbacks(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  world) ;

/// @brief Method SendContactFilterCallback, addr 0x1822f3ff0, size 0xc0, virtual false, abstract: false, final false
static inline bool SendContactFilterCallback(::System::Object*  callbackTarget, ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent  contactFilterEvent) ;

/// @brief Method SendJointThresholdCallbacks, addr 0x1822f40b0, size 0x20, virtual false, abstract: false, final false
static inline void SendJointThresholdCallbacks(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  world) ;

/// @brief Method SendPreSolveCallback, addr 0x1822f40d0, size 0xd0, virtual false, abstract: false, final false
static inline bool SendPreSolveCallback(::System::Object*  callbackTarget, ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent  preSolveEvent) ;

/// @brief Method SendTriggerCallbacks, addr 0x1822f41a0, size 0x20, virtual false, abstract: false, final false
static inline void SendTriggerCallbacks(::UnityEngine::LowLevelPhysics2D::PhysicsWorld  world) ;

static inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler* getStaticF_s_PostSimulate() ;

static inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler* getStaticF_s_PreSimulate() ;

static inline void setStaticF_s_PostSimulate(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*  value) ;

static inline void setStaticF_s_PreSimulate(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsEvents() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19852};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsEvents) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
