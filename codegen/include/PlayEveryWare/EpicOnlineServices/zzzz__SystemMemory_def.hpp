#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SystemMemory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemMemory)
namespace PlayEveryWare::EpicOnlineServices {
class SystemMemory_EOS_GenericAlignAlloc;
}
namespace PlayEveryWare::EpicOnlineServices {
class SystemMemory_EOS_GenericAlignRealloc;
}
namespace PlayEveryWare::EpicOnlineServices {
class SystemMemory_EOS_GenericFree;
}
namespace PlayEveryWare::EpicOnlineServices {
struct SystemMemory_MemCounters;
}
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
namespace PlayEveryWare::EpicOnlineServices {
class SystemMemory;
}
namespace PlayEveryWare::EpicOnlineServices {
class SystemMemory_EOS_GenericAlignAlloc;
}
namespace PlayEveryWare::EpicOnlineServices {
class SystemMemory_EOS_GenericAlignRealloc;
}
namespace PlayEveryWare::EpicOnlineServices {
class SystemMemory_EOS_GenericFree;
}
namespace PlayEveryWare::EpicOnlineServices {
struct SystemMemory_MemCounters;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::SystemMemory*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::SystemMemory_MemCounters);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SystemMemory*, "PlayEveryWare.EpicOnlineServices", "SystemMemory");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc*, "PlayEveryWare.EpicOnlineServices", "SystemMemory/EOS_GenericAlignAlloc");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc*, "PlayEveryWare.EpicOnlineServices", "SystemMemory/EOS_GenericAlignRealloc");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree*, "PlayEveryWare.EpicOnlineServices", "SystemMemory/EOS_GenericFree");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SystemMemory_MemCounters, "PlayEveryWare.EpicOnlineServices", "SystemMemory/MemCounters");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.SystemMemory/MemCounters
#pragma pack(push, 8)
struct CORDL_TYPE SystemMemory_MemCounters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SystemMemory_MemCounters() ;

// Ctor Parameters [CppParam { name: "currentMemoryAllocatedInBytes", ty: "int64_t", modifiers: "", def_value: None }]
constexpr SystemMemory_MemCounters(int64_t  currentMemoryAllocatedInBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field currentMemoryAllocatedInBytes, offset: 0x0, size: 0x8, def value: None
 int64_t  currentMemoryAllocatedInBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::SystemMemory_MemCounters, currentMemoryAllocatedInBytes) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SystemMemory_MemCounters) == 0x8, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.SystemMemory/EOS_GenericAlignAlloc
class CORDL_TYPE SystemMemory_EOS_GenericAlignAlloc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804f6a30, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804f6ab0, size 0x30, virtual true, abstract: false, final false
inline ::System::IntPtr EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes) ;

static inline ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804f6ba0, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemMemory_EOS_GenericAlignAlloc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemMemory_EOS_GenericAlignAlloc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemMemory_EOS_GenericAlignAlloc(SystemMemory_EOS_GenericAlignAlloc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemMemory_EOS_GenericAlignAlloc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemMemory_EOS_GenericAlignAlloc(SystemMemory_EOS_GenericAlignAlloc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18913};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.SystemMemory/EOS_GenericAlignRealloc
class CORDL_TYPE SystemMemory_EOS_GenericAlignRealloc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1805021a0, size 0x120, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  ptr, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804f6ab0, size 0x30, virtual true, abstract: false, final false
inline ::System::IntPtr EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::System::IntPtr  ptr, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes) ;

static inline ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805022c0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemMemory_EOS_GenericAlignRealloc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemMemory_EOS_GenericAlignRealloc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemMemory_EOS_GenericAlignRealloc(SystemMemory_EOS_GenericAlignRealloc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemMemory_EOS_GenericAlignRealloc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemMemory_EOS_GenericAlignRealloc(SystemMemory_EOS_GenericAlignRealloc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18914};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.SystemMemory/EOS_GenericFree
class CORDL_TYPE SystemMemory_EOS_GenericFree : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502370, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  ptr, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  ptr) ;

static inline ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemMemory_EOS_GenericFree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemMemory_EOS_GenericFree", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemMemory_EOS_GenericFree(SystemMemory_EOS_GenericFree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemMemory_EOS_GenericFree", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemMemory_EOS_GenericFree(SystemMemory_EOS_GenericFree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.SystemMemory
class CORDL_TYPE SystemMemory : public ::System::Object {
public:
// Declarations
using EOS_GenericAlignAlloc = ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignAlloc;

using EOS_GenericAlignRealloc = ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericAlignRealloc;

using EOS_GenericFree = ::PlayEveryWare::EpicOnlineServices::SystemMemory_EOS_GenericFree;

using MemCounters = ::PlayEveryWare::EpicOnlineServices::SystemMemory_MemCounters;

/// @brief Method GenericAlignAlloc, addr 0x180547280, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr GenericAlignAlloc(::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes) ;

/// @brief Method GenericAlignRealloc, addr 0x180547310, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr GenericAlignRealloc(::System::IntPtr  ptr, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignmentInBytes) ;

/// @brief Method GenericFree, addr 0x1805473b0, size 0x80, virtual false, abstract: false, final false
static inline void GenericFree(::System::IntPtr  ptr) ;

/// @brief Method GetAllocatorFunctions, addr 0x180547430, size 0x50, virtual false, abstract: false, final false
static inline void GetAllocatorFunctions(::by_ref<::System::IntPtr>  alloc, ::by_ref<::System::IntPtr>  realloc, ::by_ref<::System::IntPtr>  free) ;

/// @brief Method Mem_generic_align_alloc, addr 0x180547280, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr Mem_generic_align_alloc(::System::UIntPtr  size_in_bytes, ::System::UIntPtr  alignment_in_bytes) ;

/// @brief Method Mem_generic_align_realloc, addr 0x180547310, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr Mem_generic_align_realloc(::System::IntPtr  ptr, ::System::UIntPtr  size_in_bytes, ::System::UIntPtr  alignment_in_bytes) ;

/// @brief Method Mem_generic_free, addr 0x1805473b0, size 0x80, virtual false, abstract: false, final false
static inline void Mem_generic_free(::System::IntPtr  ptr) ;

static inline ::PlayEveryWare::EpicOnlineServices::SystemMemory* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemMemory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemMemory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemMemory(SystemMemory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemMemory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemMemory(SystemMemory const& ) = delete;

/// @brief Field DLLHBinaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  DLLHBinaryName{u"DynamicLibraryLoaderHelper"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18916};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SystemMemory) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
