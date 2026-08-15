#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ISendQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISendQueue_1)
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
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
class ISendQueue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::ISendQueue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::ISendQueue_1, "Dissonance.Networking.Client", "ISendQueue`1");
// Dependencies 
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.ISendQueue`1<TPeer>
class CORDL_TYPE ISendQueue_1 {
public:
// Declarations
/// @brief Method EnqeueUnreliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnqeueUnreliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method EnqueueReliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnqueueReliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method EnqueueReliableP2P, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnqueueReliableP2P(uint16_t  localId, ::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method EnqueueUnreliableP2P, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnqueueUnreliableP2P(uint16_t  localId, ::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method GetSendBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetSendBuffer() ;

/// @brief Method RecycleSendBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RecycleSendBuffer(::ArrayW<uint8_t>  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "ISendQueue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISendQueue_1(ISendQueue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
