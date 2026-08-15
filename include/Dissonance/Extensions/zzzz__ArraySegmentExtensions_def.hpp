#pragma once
// IWYU pragma private; include "Dissonance/Extensions/ArraySegmentExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySegmentExtensions)
namespace Dissonance::Extensions {
struct ArraySegmentExtensions_DisposableHandle;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Dissonance::Extensions {
class ArraySegmentExtensions;
}
namespace Dissonance::Extensions {
struct ArraySegmentExtensions_DisposableHandle;
}
// Write type traits
MARK_REF_T(::Dissonance::Extensions::ArraySegmentExtensions*);
MARK_VAL_T(::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle);
DEFINE_IL2CPP_CLASS(::Dissonance::Extensions::ArraySegmentExtensions*, "Dissonance.Extensions", "ArraySegmentExtensions");
DEFINE_IL2CPP_CLASS(::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle, "Dissonance.Extensions", "ArraySegmentExtensions/DisposableHandle");
// Dependencies System.IntPtr, System.Runtime.InteropServices.GCHandle
namespace Dissonance::Extensions {
// Is value type: true
// CS Name: Dissonance.Extensions.ArraySegmentExtensions/DisposableHandle
struct CORDL_TYPE ArraySegmentExtensions_DisposableHandle {
public:
// Declarations
 __declspec(property(get=get_Ptr)) ::System::IntPtr  Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1805dd0a0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x1805dd0c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ptr, ::System::Runtime::InteropServices::GCHandle  handle) ;

/// @brief Method get_Ptr, addr 0x1805dd0e0, size 0x70, virtual false, abstract: false, final false
inline ::System::IntPtr get_Ptr() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ArraySegmentExtensions_DisposableHandle() ;

// Ctor Parameters [CppParam { name: "_ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr ArraySegmentExtensions_DisposableHandle(::System::IntPtr  _ptr, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16928};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _ptr;

/// @brief Field _handle, offset: 0x8, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  _handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle, _ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle, _handle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Extensions
// Dependencies System.Object
namespace Dissonance::Extensions {
// Is value type: false
// CS Name: Dissonance.Extensions.ArraySegmentExtensions
class CORDL_TYPE ArraySegmentExtensions : public ::System::Object {
public:
// Declarations
using DisposableHandle = ::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Clear(::System::ArraySegment_1<T>  segment) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t CopyFrom(::System::ArraySegment_1<T>  destination, ::ArrayW<T>  source) ;

/// @brief Method CopyToSegment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::ArraySegment_1<T> CopyToSegment(::System::ArraySegment_1<T>  source, ::ArrayW<T>  destination, int32_t  destinationOffset) ;

/// @brief Method Pin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle Pin(::System::ArraySegment_1<T>  segment) ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ToArray(::System::ArraySegment_1<T>  segment) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArraySegmentExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArraySegmentExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySegmentExtensions(ArraySegmentExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySegmentExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySegmentExtensions(ArraySegmentExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16929};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Extensions::ArraySegmentExtensions) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Extensions
