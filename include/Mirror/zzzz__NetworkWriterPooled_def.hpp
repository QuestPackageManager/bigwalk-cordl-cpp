#pragma once
// IWYU pragma private; include "Mirror/NetworkWriterPooled.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkWriter_def.hpp"
CORDL_MODULE_EXPORT(NetworkWriterPooled)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mirror {
class NetworkWriterPooled;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkWriterPooled*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkWriterPooled*, "Mirror", "NetworkWriterPooled");
// Dependencies Mirror.NetworkWriter
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkWriterPooled
class CORDL_TYPE NetworkWriterPooled : public ::Mirror::NetworkWriter {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x18035c8d0, size 0xb0, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Mirror::NetworkWriterPooled* New_ctor() ;

/// @brief Method .ctor, addr 0x181597420, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkWriterPooled() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriterPooled", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkWriterPooled(NetworkWriterPooled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriterPooled", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkWriterPooled(NetworkWriterPooled const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18350};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkWriterPooled) == 0x28, "Size mismatch!");

} // namespace end def Mirror
