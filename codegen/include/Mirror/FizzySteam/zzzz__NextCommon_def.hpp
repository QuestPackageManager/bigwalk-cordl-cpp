#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/NextCommon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NextCommon)
namespace Steamworks {
struct EResult;
}
namespace Steamworks {
struct HSteamNetConnection;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Mirror::FizzySteam {
class NextCommon;
}
// Write type traits
MARK_REF_T(::Mirror::FizzySteam::NextCommon*);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::NextCommon*, "Mirror.FizzySteam", "NextCommon");
// Dependencies System.Object
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.NextCommon
class CORDL_TYPE NextCommon : public ::System::Object {
public:
// Declarations
static inline ::Mirror::FizzySteam::NextCommon* New_ctor() ;

/// @brief Method ProcessMessage, addr 0x18062ed40, size 0xe0, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::ArrayW<uint8_t>,int32_t> ProcessMessage(::System::IntPtr  ptrs) ;

/// @brief Method SendSocket, addr 0x18062ee20, size 0x120, virtual false, abstract: false, final false
inline ::Steamworks::EResult SendSocket(::Steamworks::HSteamNetConnection  conn, ::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NextCommon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NextCommon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NextCommon(NextCommon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NextCommon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NextCommon(NextCommon const& ) = delete;

/// @brief Field MAX_MESSAGES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_MESSAGES{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20906};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::FizzySteam::NextCommon) == 0x10, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
