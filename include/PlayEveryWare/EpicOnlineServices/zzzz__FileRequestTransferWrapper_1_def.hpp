#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FileRequestTransferWrapper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileRequestTransferWrapper_1)
namespace Epic::OnlineServices {
struct Result;
}
namespace PlayEveryWare::EpicOnlineServices {
class IFileTransferRequest;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
template<typename T>
class FileRequestTransferWrapper_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1, "PlayEveryWare.EpicOnlineServices", "FileRequestTransferWrapper`1");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.FileRequestTransferWrapper`1<T>
class CORDL_TYPE FileRequestTransferWrapper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _disposed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _instance, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instance, put=__cordl_internal_set__instance)) T  _instance;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IFileTransferRequest"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CancelRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::Result CancelRequest() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>* New_ctor(T  instance) ;

/// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Release() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr T const& __cordl_internal_get__instance() const;

constexpr T& __cordl_internal_get__instance() ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__instance(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  instance) ;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IFileTransferRequest"
constexpr ::PlayEveryWare::EpicOnlineServices::IFileTransferRequest* i___PlayEveryWare__EpicOnlineServices__IFileTransferRequest() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*  wrapper, ::System::Object*  obj) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*  wrapper, ::System::Object*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileRequestTransferWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileRequestTransferWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileRequestTransferWrapper_1(FileRequestTransferWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileRequestTransferWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileRequestTransferWrapper_1(FileRequestTransferWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18887};

/// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
 T  ____instance;

/// @brief Field _disposed, offset: 0x18, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
