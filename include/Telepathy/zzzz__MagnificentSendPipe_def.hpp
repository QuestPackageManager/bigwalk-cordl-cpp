#pragma once
// IWYU pragma private; include "Telepathy/MagnificentSendPipe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MagnificentSendPipe)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace Telepathy {
class MagnificentSendPipe___c__DisplayClass2_0;
}
namespace Telepathy {
template<typename T>
class Pool_1;
}
// Forward declare root types
namespace Telepathy {
class MagnificentSendPipe;
}
namespace Telepathy {
class MagnificentSendPipe___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::Telepathy::MagnificentSendPipe*);
MARK_REF_T(::Telepathy::MagnificentSendPipe___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::Telepathy::MagnificentSendPipe*, "Telepathy", "MagnificentSendPipe");
DEFINE_IL2CPP_CLASS(::Telepathy::MagnificentSendPipe___c__DisplayClass2_0*, "Telepathy", "MagnificentSendPipe/<>c__DisplayClass2_0");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.MagnificentSendPipe/<>c__DisplayClass2_0
class CORDL_TYPE MagnificentSendPipe___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field MaxMessageSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxMessageSize, put=__cordl_internal_set_MaxMessageSize)) int32_t  MaxMessageSize;

static inline ::Telepathy::MagnificentSendPipe___c__DisplayClass2_0* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_MaxMessageSize() const;

constexpr int32_t& __cordl_internal_get_MaxMessageSize() ;

constexpr void __cordl_internal_set_MaxMessageSize(int32_t  value) ;

/// @brief Method <.ctor>b__0, addr 0x181e5b430, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> __ctor_b__0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagnificentSendPipe___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagnificentSendPipe___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MagnificentSendPipe___c__DisplayClass2_0(MagnificentSendPipe___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagnificentSendPipe___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagnificentSendPipe___c__DisplayClass2_0(MagnificentSendPipe___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21323};

/// @brief Field MaxMessageSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ___MaxMessageSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::MagnificentSendPipe___c__DisplayClass2_0, ___MaxMessageSize) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Telepathy::MagnificentSendPipe___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace end def Telepathy
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.MagnificentSendPipe
class CORDL_TYPE MagnificentSendPipe : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::Telepathy::MagnificentSendPipe___c__DisplayClass2_0;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_PoolCount)) int32_t  PoolCount;

/// @brief Field pool, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::Telepathy::Pool_1<::ArrayW<uint8_t>>*  pool;

/// @brief Field queue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::Queue_1<::System::ArraySegment_1<uint8_t>>*  queue;

/// @brief Method Clear, addr 0x181e59170, size 0xe0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DequeueAndSerializeAll, addr 0x181e59250, size 0x2e0, virtual false, abstract: false, final false
inline bool DequeueAndSerializeAll(::by_ref<::ArrayW<uint8_t>>  payload, ::by_ref<int32_t>  packetSize) ;

/// @brief Method Enqueue, addr 0x181e59530, size 0x140, virtual false, abstract: false, final false
inline void Enqueue(::System::ArraySegment_1<uint8_t>  message) ;

static inline ::Telepathy::MagnificentSendPipe* New_ctor(int32_t  MaxMessageSize) ;

constexpr ::Telepathy::Pool_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_pool() const;

constexpr ::Telepathy::Pool_1<::ArrayW<uint8_t>>*& __cordl_internal_get_pool() ;

constexpr ::System::Collections::Generic::Queue_1<::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_queue() ;

constexpr void __cordl_internal_set_pool(::Telepathy::Pool_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::System::ArraySegment_1<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0x181e59670, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  MaxMessageSize) ;

/// @brief Method get_Count, addr 0x181e590d0, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_PoolCount, addr 0x181e59030, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_PoolCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagnificentSendPipe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagnificentSendPipe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MagnificentSendPipe(MagnificentSendPipe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagnificentSendPipe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagnificentSendPipe(MagnificentSendPipe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21324};

/// @brief Field queue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::ArraySegment_1<uint8_t>>*  ___queue;

/// @brief Field pool, offset: 0x18, size: 0x8, def value: None
 ::Telepathy::Pool_1<::ArrayW<uint8_t>>*  ___pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::MagnificentSendPipe, ___queue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Telepathy::MagnificentSendPipe, ___pool) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Telepathy::MagnificentSendPipe) == 0x20, "Size mismatch!");

} // namespace end def Telepathy
