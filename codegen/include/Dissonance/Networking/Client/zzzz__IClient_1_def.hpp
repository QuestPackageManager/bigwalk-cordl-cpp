#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/IClient_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IClient_1)
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
template<typename TPeer>
class IClient_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::IClient_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::IClient_1, "Dissonance.Networking.Client", "IClient`1");
// Dependencies 
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.IClient`1<TPeer>
class CORDL_TYPE IClient_1 {
public:
// Declarations
/// @brief Method SendReliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReliable(::System::ArraySegment_1<uint8_t>  arraySegment) ;

/// @brief Method SendReliableP2P, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendUnreliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendUnreliable(::System::ArraySegment_1<uint8_t>  arraySegment) ;

/// @brief Method SendUnreliableP2P, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendUnreliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

// Ctor Parameters [CppParam { name: "", ty: "IClient_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IClient_1(IClient_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16913};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
