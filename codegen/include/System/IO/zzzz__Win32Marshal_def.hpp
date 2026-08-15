#pragma once
// IWYU pragma private; include "System/IO/Win32Marshal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Win32Marshal)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::IO {
class Win32Marshal;
}
// Write type traits
MARK_REF_T(::System::IO::Win32Marshal*);
DEFINE_IL2CPP_CLASS(::System::IO::Win32Marshal*, "System.IO", "Win32Marshal");
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Win32Marshal
class CORDL_TYPE Win32Marshal : public ::System::Object {
public:
// Declarations
/// @brief Method GetExceptionForLastWin32Error, addr 0x1816e4040, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* GetExceptionForLastWin32Error(::StringW  path) ;

/// @brief Method GetExceptionForWin32Error, addr 0x1816e4070, size 0x3f0, virtual false, abstract: false, final false
static inline ::System::Exception* GetExceptionForWin32Error(int32_t  errorCode, ::StringW  path) ;

/// @brief Method GetMessage, addr 0x1816e4460, size 0x10, virtual false, abstract: false, final false
static inline ::StringW GetMessage(int32_t  errorCode) ;

/// @brief Method MakeHRFromErrorCode, addr 0x1816e4470, size 0x1d0, virtual false, abstract: false, final false
static inline int32_t MakeHRFromErrorCode(int32_t  errorCode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Win32Marshal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Win32Marshal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Win32Marshal(Win32Marshal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Win32Marshal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Win32Marshal(Win32Marshal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1632};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::Win32Marshal) == 0x10, "Size mismatch!");

} // namespace end def System::IO
