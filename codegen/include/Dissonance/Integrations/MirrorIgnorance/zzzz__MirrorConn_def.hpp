#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorConn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorConn)
namespace Mirror {
class NetworkConnection;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance::Integrations::MirrorIgnorance {
struct MirrorConn;
}
// Write type traits
MARK_VAL_T(::Dissonance::Integrations::MirrorIgnorance::MirrorConn);
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::MirrorConn, "Dissonance.Integrations.MirrorIgnorance", "MirrorConn");
// Dependencies 
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: true
// CS Name: Dissonance.Integrations.MirrorIgnorance.MirrorConn
struct CORDL_TYPE MirrorConn {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>"
constexpr operator  ::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>*() ;

/// @brief Method Equals, addr 0x1803cd840, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1803cd810, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::Dissonance::Integrations::MirrorIgnorance::MirrorConn  other) ;

/// @brief Method GetHashCode, addr 0x1803cd8d0, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1803cd910, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Mirror::NetworkConnection*  connection) ;

/// @brief Convert to "::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>"
constexpr ::System::IEquatable_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>* i___System__IEquatable_1___Dissonance__Integrations__MirrorIgnorance__MirrorConn_() ;

// Ctor Parameters []
// @brief default ctor
constexpr MirrorConn() ;

// Ctor Parameters [CppParam { name: "Connection", ty: "::Mirror::NetworkConnection*", modifiers: "", def_value: None }]
constexpr MirrorConn(::Mirror::NetworkConnection*  Connection) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Connection, offset: 0x0, size: 0x8, def value: None
 ::Mirror::NetworkConnection*  Connection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorConn, Connection) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::MirrorConn) == 0x8, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
