#pragma once
// IWYU pragma private; include "System/IO/DisableMediaInsertionPrompt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisableMediaInsertionPrompt)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::IO {
struct DisableMediaInsertionPrompt;
}
// Write type traits
MARK_VAL_T(::System::IO::DisableMediaInsertionPrompt);
DEFINE_IL2CPP_CLASS(::System::IO::DisableMediaInsertionPrompt, "System.IO", "DisableMediaInsertionPrompt");
// Dependencies 
namespace System::IO {
// Is value type: true
// CS Name: System.IO.DisableMediaInsertionPrompt
struct CORDL_TYPE DisableMediaInsertionPrompt {
public:
// Declarations
/// @brief Field useUWPFallback, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_useUWPFallback, put=setStaticF_useUWPFallback)) bool  useUWPFallback;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Create, addr 0x1816d32d0, size 0x60, virtual false, abstract: false, final false
static inline ::System::IO::DisableMediaInsertionPrompt Create() ;

/// @brief Method Dispose, addr 0x1816d3330, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

static inline bool getStaticF_useUWPFallback() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_useUWPFallback(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DisableMediaInsertionPrompt() ;

// Ctor Parameters [CppParam { name: "_disableSuccess", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_oldMode", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr DisableMediaInsertionPrompt(bool  _disableSuccess, uint32_t  _oldMode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _disableSuccess, offset: 0x0, size: 0x1, def value: None
 bool  _disableSuccess;

/// @brief Field _oldMode, offset: 0x4, size: 0x4, def value: None
 uint32_t  _oldMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::DisableMediaInsertionPrompt, _disableSuccess) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::DisableMediaInsertionPrompt, _oldMode) == 0x4, "Offset mismatch!");

static_assert(sizeof(::System::IO::DisableMediaInsertionPrompt) == 0x8, "Size mismatch!");

} // namespace end def System::IO
