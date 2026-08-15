#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUniTaskSource_1)
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
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
template<typename T>
class IUniTaskSource_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IUniTaskSource_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IUniTaskSource_1, "Cysharp.Threading.Tasks", "IUniTaskSource`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IUniTaskSource`1<T>
class CORDL_TYPE IUniTaskSource_1 {
public:
// Declarations
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept;

/// @brief Method GetResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<T>.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Threading_Tasks_Sources_IValueTaskSource_T__GetResult(int16_t  token) ;

/// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<T>.GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System_Threading_Tasks_Sources_IValueTaskSource_T__GetStatus(int16_t  token) ;

/// @brief Method System.Threading.Tasks.Sources.IValueTaskSource<T>.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Threading_Tasks_Sources_IValueTaskSource_T__OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  flags) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUniTaskSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUniTaskSource_1(IUniTaskSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14213};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
