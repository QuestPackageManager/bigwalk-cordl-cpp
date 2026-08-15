#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUniTaskSource)
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::IUniTaskSource*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::IUniTaskSource*, "Cysharp.Threading.Tasks", "IUniTaskSource");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IUniTaskSource
class CORDL_TYPE IUniTaskSource {
public:
// Declarations
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method GetResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method OnCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetResult, addr 0x181e604e0, size 0x20, virtual true, abstract: false, final true
inline void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t  token) ;

/// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetStatus, addr 0x181e60500, size 0x20, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(int16_t  token) ;

/// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.OnCompleted, addr 0x181e60520, size 0x30, virtual true, abstract: false, final true
inline void System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  flags) ;

/// @brief Method UnsafeGetStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUniTaskSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUniTaskSource(IUniTaskSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14212};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
