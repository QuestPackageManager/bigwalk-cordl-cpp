#pragma once
// IWYU pragma private; include "System/WindowsConsoleDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsConsoleDriver)
namespace System {
struct ConsoleColor;
}
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
struct ConsoleScreenBufferInfo;
}
namespace System {
struct Coord;
}
namespace System {
struct Handles;
}
namespace System {
class IConsoleDriver;
}
namespace System {
struct InputRecord;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System {
class WindowsConsoleDriver;
}
// Write type traits
MARK_REF_T(::System::WindowsConsoleDriver*);
DEFINE_IL2CPP_CLASS(::System::WindowsConsoleDriver*, "System", "WindowsConsoleDriver");
// Dependencies System.IntPtr, System.Object
namespace System {
// Is value type: false
// CS Name: System.WindowsConsoleDriver
class CORDL_TYPE WindowsConsoleDriver : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_ForegroundColor)) ::System::ConsoleColor  ForegroundColor;

/// @brief Field defaultAttribute, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get_defaultAttribute, put=__cordl_internal_set_defaultAttribute)) int16_t  defaultAttribute;

/// @brief Field inputHandle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputHandle, put=__cordl_internal_set_inputHandle)) ::System::IntPtr  inputHandle;

/// @brief Field outputHandle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputHandle, put=__cordl_internal_set_outputHandle)) ::System::IntPtr  outputHandle;

/// @brief Convert operator to "::System::IConsoleDriver"
constexpr operator  ::System::IConsoleDriver*() noexcept;

/// @brief Method Clear, addr 0x181768e50, size 0x270, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method FillConsoleOutputAttribute, addr 0x1817690c0, size 0xc0, virtual false, abstract: false, final false
static inline bool FillConsoleOutputAttribute(::System::IntPtr  handle, int16_t  c, int32_t  size, ::System::Coord  coord, ::by_ref<int32_t>  written) ;

/// @brief Method FillConsoleOutputCharacter, addr 0x181769180, size 0xc0, virtual false, abstract: false, final false
static inline bool FillConsoleOutputCharacter(::System::IntPtr  handle, char16_t  c, int32_t  size, ::System::Coord  coord, ::by_ref<int32_t>  written) ;

/// @brief Method GetAttrForeground, addr 0x181769240, size 0x10, virtual false, abstract: false, final false
static inline int16_t GetAttrForeground(int32_t  attr, ::System::ConsoleColor  color) ;

/// @brief Method GetConsoleScreenBufferInfo, addr 0x181769250, size 0xa0, virtual false, abstract: false, final false
static inline bool GetConsoleScreenBufferInfo(::System::IntPtr  handle, ::by_ref<::System::ConsoleScreenBufferInfo>  info) ;

/// @brief Method GetStdHandle, addr 0x1817692f0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStdHandle(::System::Handles  handle) ;

/// @brief Method IsModifierKey, addr 0x181769380, size 0x30, virtual false, abstract: false, final false
static inline bool IsModifierKey(int16_t  virtualKeyCode) ;

static inline ::System::WindowsConsoleDriver* New_ctor() ;

/// @brief Method ReadConsoleInput, addr 0x1817693b0, size 0x130, virtual false, abstract: false, final false
static inline bool ReadConsoleInput(::System::IntPtr  handle, ::by_ref<::System::InputRecord>  record, int32_t  length, ::by_ref<int32_t>  nread) ;

/// @brief Method ReadKey, addr 0x1817694e0, size 0x200, virtual true, abstract: false, final true
inline ::System::ConsoleKeyInfo ReadKey(bool  intercept) ;

/// @brief Method ResetColor, addr 0x1817696e0, size 0x10, virtual true, abstract: false, final true
inline void ResetColor() ;

/// @brief Method SetConsoleCursorPosition, addr 0x1817696f0, size 0xa0, virtual false, abstract: false, final false
static inline bool SetConsoleCursorPosition(::System::IntPtr  handle, ::System::Coord  coord) ;

/// @brief Method SetConsoleTextAttribute, addr 0x181769790, size 0xa0, virtual false, abstract: false, final false
static inline bool SetConsoleTextAttribute(::System::IntPtr  handle, int16_t  attribute) ;

constexpr int16_t const& __cordl_internal_get_defaultAttribute() const;

constexpr int16_t& __cordl_internal_get_defaultAttribute() ;

constexpr ::System::IntPtr const& __cordl_internal_get_inputHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get_inputHandle() ;

constexpr ::System::IntPtr const& __cordl_internal_get_outputHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get_outputHandle() ;

constexpr void __cordl_internal_set_defaultAttribute(int16_t  value) ;

constexpr void __cordl_internal_set_inputHandle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_outputHandle(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x181769830, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IConsoleDriver"
constexpr ::System::IConsoleDriver* i___System__IConsoleDriver() noexcept;

/// @brief Method set_ForegroundColor, addr 0x181769920, size 0xd0, virtual true, abstract: false, final true
inline void set_ForegroundColor(::System::ConsoleColor  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsConsoleDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsConsoleDriver(WindowsConsoleDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsConsoleDriver(WindowsConsoleDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{485};

/// @brief Field inputHandle, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___inputHandle;

/// @brief Field outputHandle, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___outputHandle;

/// @brief Field defaultAttribute, offset: 0x20, size: 0x2, def value: None
 int16_t  ___defaultAttribute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::WindowsConsoleDriver, ___inputHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::WindowsConsoleDriver, ___outputHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::WindowsConsoleDriver, ___defaultAttribute) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::WindowsConsoleDriver) == 0x28, "Size mismatch!");

} // namespace end def System
