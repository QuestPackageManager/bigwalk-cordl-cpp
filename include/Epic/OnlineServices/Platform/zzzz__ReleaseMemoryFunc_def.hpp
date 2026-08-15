#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ReleaseMemoryFunc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ReleaseMemoryFunc)
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
// Forward declare root types
namespace Epic::OnlineServices::Platform {
class ReleaseMemoryFunc;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Platform::ReleaseMemoryFunc*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::ReleaseMemoryFunc*, "Epic.OnlineServices.Platform", "ReleaseMemoryFunc");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::Platform {
// Is value type: false
// CS Name: Epic.OnlineServices.Platform.ReleaseMemoryFunc
class CORDL_TYPE ReleaseMemoryFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502370, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  pointer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  pointer) ;

static inline ::Epic::OnlineServices::Platform::ReleaseMemoryFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReleaseMemoryFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReleaseMemoryFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReleaseMemoryFunc(ReleaseMemoryFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReleaseMemoryFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReleaseMemoryFunc(ReleaseMemoryFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8363};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Platform::ReleaseMemoryFunc) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
