#pragma once
// IWYU pragma private; include "System/Threading/AsyncFlowControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncFlowControl)
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class Thread;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
struct AsyncFlowControl;
}
// Write type traits
MARK_VAL_T(::System::Threading::AsyncFlowControl);
DEFINE_IL2CPP_CLASS(::System::Threading::AsyncFlowControl, "System.Threading", "AsyncFlowControl");
// Dependencies 
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.AsyncFlowControl
struct CORDL_TYPE AsyncFlowControl {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x181758ea0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Equals, addr 0x181758ec0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181758f50, size 0x50, virtual false, abstract: false, final false
inline bool Equals(::System::Threading::AsyncFlowControl  obj) ;

/// @brief Method GetHashCode, addr 0x181758fa0, size 0xa0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Setup, addr 0x181759040, size 0x70, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Undo, addr 0x1817590b0, size 0x150, virtual false, abstract: false, final false
inline void Undo() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncFlowControl() ;

// Ctor Parameters [CppParam { name: "useEC", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "_thread", ty: "::System::Threading::Thread*", modifiers: "", def_value: None }]
constexpr AsyncFlowControl(bool  useEC, ::System::Threading::ExecutionContext*  _ec, ::System::Threading::Thread*  _thread) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{548};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field useEC, offset: 0x0, size: 0x1, def value: None
 bool  useEC;

/// @brief Field _ec, offset: 0x8, size: 0x8, def value: None
 ::System::Threading::ExecutionContext*  _ec;

/// @brief Field _thread, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Thread*  _thread;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::AsyncFlowControl, useEC) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::AsyncFlowControl, _ec) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::AsyncFlowControl, _thread) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Threading::AsyncFlowControl) == 0x18, "Size mismatch!");

} // namespace end def System::Threading
