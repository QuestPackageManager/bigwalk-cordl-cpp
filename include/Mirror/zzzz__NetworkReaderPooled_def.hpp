#pragma once
// IWYU pragma private; include "Mirror/NetworkReaderPooled.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkReaderPooled)
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mirror {
class NetworkReaderPooled;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkReaderPooled*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkReaderPooled*, "Mirror", "NetworkReaderPooled");
// Dependencies Mirror.NetworkReader
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkReaderPooled
class CORDL_TYPE NetworkReaderPooled : public ::Mirror::NetworkReader {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x18154c470, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Mirror::NetworkReaderPooled* New_ctor(::ArrayW<uint8_t>  bytes) ;

static inline ::Mirror::NetworkReaderPooled* New_ctor(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method .ctor, addr 0x18154c610, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  bytes) ;

/// @brief Method .ctor, addr 0x18154c5a0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkReaderPooled() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkReaderPooled", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkReaderPooled(NetworkReaderPooled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkReaderPooled", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkReaderPooled(NetworkReaderPooled const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkReaderPooled) == 0x30, "Size mismatch!");

} // namespace end def Mirror
