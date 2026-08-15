#pragma once
// IWYU pragma private; include "Mirror/NetworkMessageId_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMessageId_1)
// Forward declare root types
namespace Mirror {
template<typename T>
class NetworkMessageId_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Mirror::NetworkMessageId_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::NetworkMessageId_1, "Mirror", "NetworkMessageId`1");
// Dependencies System.Object
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.NetworkMessageId`1<T>
class CORDL_TYPE NetworkMessageId_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Id, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_Id, put=setStaticF_Id)) uint16_t  Id;

static inline uint16_t getStaticF_Id() ;

static inline void setStaticF_Id(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMessageId_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessageId_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMessageId_1(NetworkMessageId_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessageId_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMessageId_1(NetworkMessageId_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
