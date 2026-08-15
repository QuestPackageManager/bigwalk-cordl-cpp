#pragma once
// IWYU pragma private; include "Animancer/Examples/Events/EventUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventUtilities)
namespace Animancer::Examples::Events {
class EventUtilities___c;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Animancer::Examples::Events {
class EventUtilities;
}
namespace Animancer::Examples::Events {
class EventUtilities___c;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Events::EventUtilities*);
MARK_REF_T(::Animancer::Examples::Events::EventUtilities___c*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Events::EventUtilities*, "Animancer.Examples.Events", "EventUtilities");
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Events::EventUtilities___c*, "Animancer.Examples.Events", "EventUtilities/<>c");
// Dependencies System.Object
namespace Animancer::Examples::Events {
// Is value type: false
// CS Name: Animancer.Examples.Events.EventUtilities/<>c
class CORDL_TYPE EventUtilities___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Animancer::Examples::Events::EventUtilities___c*  __9;

static inline ::Animancer::Examples::Events::EventUtilities___c* New_ctor() ;

/// @brief Method <.cctor>b__3_0, addr 0x180303310, size 0x140, virtual false, abstract: false, final false
inline void __cctor_b__3_0() ;

/// @brief Method <.cctor>b__3_1, addr 0x180303450, size 0x50, virtual false, abstract: false, final false
inline void __cctor_b__3_1() ;

/// @brief Method <.cctor>b__3_2, addr 0x1803034a0, size 0xa0, virtual false, abstract: false, final false
inline void __cctor_b__3_2() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Animancer::Examples::Events::EventUtilities___c* getStaticF___9() ;

static inline void setStaticF___9(::Animancer::Examples::Events::EventUtilities___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventUtilities___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventUtilities___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventUtilities___c(EventUtilities___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventUtilities___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventUtilities___c(EventUtilities___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20012};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Examples::Events::EventUtilities___c) == 0x10, "Size mismatch!");

} // namespace end def Animancer::Examples::Events
// Dependencies System.Object
namespace Animancer::Examples::Events {
// Is value type: false
// CS Name: Animancer.Examples.Events.EventUtilities
class CORDL_TYPE EventUtilities : public ::System::Object {
public:
// Declarations
using __c = ::Animancer::Examples::Events::EventUtilities___c;

/// @brief Field LogCurrentEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogCurrentEvent, put=setStaticF_LogCurrentEvent)) ::System::Action*  LogCurrentEvent;

/// @brief Field PauseAtCurrentEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PauseAtCurrentEvent, put=setStaticF_PauseAtCurrentEvent)) ::System::Action*  PauseAtCurrentEvent;

/// @brief Field RestartCurrentState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RestartCurrentState, put=setStaticF_RestartCurrentState)) ::System::Action*  RestartCurrentState;

static inline ::System::Action* getStaticF_LogCurrentEvent() ;

static inline ::System::Action* getStaticF_PauseAtCurrentEvent() ;

static inline ::System::Action* getStaticF_RestartCurrentState() ;

static inline void setStaticF_LogCurrentEvent(::System::Action*  value) ;

static inline void setStaticF_PauseAtCurrentEvent(::System::Action*  value) ;

static inline void setStaticF_RestartCurrentState(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventUtilities(EventUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventUtilities(EventUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20013};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Examples::Events::EventUtilities) == 0x10, "Size mismatch!");

} // namespace end def Animancer::Examples::Events
