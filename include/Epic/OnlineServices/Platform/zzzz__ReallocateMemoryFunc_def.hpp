#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ReallocateMemoryFunc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ReallocateMemoryFunc)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
class ReallocateMemoryFunc;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Platform::ReallocateMemoryFunc*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::ReallocateMemoryFunc*, "Epic.OnlineServices.Platform", "ReallocateMemoryFunc");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::Platform {
// Is value type: false
// CS Name: Epic.OnlineServices.Platform.ReallocateMemoryFunc
class CORDL_TYPE ReallocateMemoryFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1805021a0, size 0x120, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  pointer, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignment, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804f6ab0, size 0x30, virtual true, abstract: false, final false
inline ::System::IntPtr EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::System::IntPtr  pointer, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignment) ;

static inline ::Epic::OnlineServices::Platform::ReallocateMemoryFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805022c0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReallocateMemoryFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReallocateMemoryFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReallocateMemoryFunc(ReallocateMemoryFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReallocateMemoryFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReallocateMemoryFunc(ReallocateMemoryFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8362};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Platform::ReallocateMemoryFunc) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
