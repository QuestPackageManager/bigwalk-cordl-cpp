#pragma once
// IWYU pragma private; include "Telepathy/MagnificentReceivePipe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Telepathy/zzzz__EventType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MagnificentReceivePipe)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace Telepathy {
struct EventType;
}
namespace Telepathy {
struct MagnificentReceivePipe_Entry;
}
namespace Telepathy {
class MagnificentReceivePipe___c__DisplayClass4_0;
}
namespace Telepathy {
template<typename T>
class Pool_1;
}
// Forward declare root types
namespace Telepathy {
class MagnificentReceivePipe;
}
namespace Telepathy {
class MagnificentReceivePipe___c__DisplayClass4_0;
}
namespace Telepathy {
struct MagnificentReceivePipe_Entry;
}
// Write type traits
MARK_REF_T(::Telepathy::MagnificentReceivePipe*);
MARK_REF_T(::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0*);
MARK_VAL_T(::Telepathy::MagnificentReceivePipe_Entry);
DEFINE_IL2CPP_CLASS(::Telepathy::MagnificentReceivePipe*, "Telepathy", "MagnificentReceivePipe");
DEFINE_IL2CPP_CLASS(::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0*, "Telepathy", "MagnificentReceivePipe/<>c__DisplayClass4_0");
DEFINE_IL2CPP_CLASS(::Telepathy::MagnificentReceivePipe_Entry, "Telepathy", "MagnificentReceivePipe/Entry");
// Dependencies System.ArraySegment`1<T>, Telepathy.EventType
namespace Telepathy {
// Is value type: true
// CS Name: Telepathy.MagnificentReceivePipe/Entry
struct CORDL_TYPE MagnificentReceivePipe_Entry {
public:
// Declarations
/// @brief Method .ctor, addr 0x181e58600, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  connectionId, ::Telepathy::EventType  eventType, ::System::ArraySegment_1<uint8_t>  data) ;

// Ctor Parameters []
// @brief default ctor
constexpr MagnificentReceivePipe_Entry() ;

// Ctor Parameters [CppParam { name: "connectionId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventType", ty: "::Telepathy::EventType", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr MagnificentReceivePipe_Entry(int32_t  connectionId, ::Telepathy::EventType  eventType, ::System::ArraySegment_1<uint8_t>  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field connectionId, offset: 0x0, size: 0x4, def value: None
 int32_t  connectionId;

/// @brief Field eventType, offset: 0x4, size: 0x4, def value: None
 ::Telepathy::EventType  eventType;

/// @brief Field data, offset: 0x8, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::MagnificentReceivePipe_Entry, connectionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Telepathy::MagnificentReceivePipe_Entry, eventType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Telepathy::MagnificentReceivePipe_Entry, data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Telepathy::MagnificentReceivePipe_Entry) == 0x18, "Size mismatch!");

} // namespace end def Telepathy
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.MagnificentReceivePipe/<>c__DisplayClass4_0
class CORDL_TYPE MagnificentReceivePipe___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field MaxMessageSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxMessageSize, put=__cordl_internal_set_MaxMessageSize)) int32_t  MaxMessageSize;

static inline ::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0* New_ctor() ;

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
constexpr MagnificentReceivePipe___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagnificentReceivePipe___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MagnificentReceivePipe___c__DisplayClass4_0(MagnificentReceivePipe___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagnificentReceivePipe___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagnificentReceivePipe___c__DisplayClass4_0(MagnificentReceivePipe___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21321};

/// @brief Field MaxMessageSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ___MaxMessageSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0, ___MaxMessageSize) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def Telepathy
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.MagnificentReceivePipe
class CORDL_TYPE MagnificentReceivePipe : public ::System::Object {
public:
// Declarations
using Entry = ::Telepathy::MagnificentReceivePipe_Entry;

using __c__DisplayClass4_0 = ::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0;

 __declspec(property(get=get_PoolCount)) int32_t  PoolCount;

 __declspec(property(get=get_TotalCount)) int32_t  TotalCount;

/// @brief Field pool, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::Telepathy::Pool_1<::ArrayW<uint8_t>>*  pool;

/// @brief Field queue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::Queue_1<::Telepathy::MagnificentReceivePipe_Entry>*  queue;

/// @brief Field queueCounter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_queueCounter, put=__cordl_internal_set_queueCounter)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  queueCounter;

/// @brief Method Clear, addr 0x181e587e0, size 0x140, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Count, addr 0x181e58920, size 0xd0, virtual false, abstract: false, final false
inline int32_t Count(int32_t  connectionId) ;

/// @brief Method Enqueue, addr 0x181e589f0, size 0x210, virtual false, abstract: false, final false
inline void Enqueue(int32_t  connectionId, ::Telepathy::EventType  eventType, ::System::ArraySegment_1<uint8_t>  message) ;

static inline ::Telepathy::MagnificentReceivePipe* New_ctor(int32_t  MaxMessageSize) ;

/// @brief Method TryDequeue, addr 0x181e58c00, size 0x1f0, virtual false, abstract: false, final false
inline bool TryDequeue() ;

/// @brief Method TryPeek, addr 0x181e58df0, size 0x150, virtual false, abstract: false, final false
inline bool TryPeek(::by_ref<int32_t>  connectionId, ::by_ref<::Telepathy::EventType>  eventType, ::by_ref<::System::ArraySegment_1<uint8_t>>  data) ;

constexpr ::Telepathy::Pool_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_pool() const;

constexpr ::Telepathy::Pool_1<::ArrayW<uint8_t>>*& __cordl_internal_get_pool() ;

constexpr ::System::Collections::Generic::Queue_1<::Telepathy::MagnificentReceivePipe_Entry>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::Queue_1<::Telepathy::MagnificentReceivePipe_Entry>*& __cordl_internal_get_queue() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_queueCounter() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_queueCounter() ;

constexpr void __cordl_internal_set_pool(::Telepathy::Pool_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::Telepathy::MagnificentReceivePipe_Entry>*  value) ;

constexpr void __cordl_internal_set_queueCounter(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x181e58f40, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(int32_t  MaxMessageSize) ;

/// @brief Method get_PoolCount, addr 0x181e59030, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_PoolCount() ;

/// @brief Method get_TotalCount, addr 0x181e590d0, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_TotalCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagnificentReceivePipe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagnificentReceivePipe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MagnificentReceivePipe(MagnificentReceivePipe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagnificentReceivePipe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagnificentReceivePipe(MagnificentReceivePipe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21322};

/// @brief Field queue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Telepathy::MagnificentReceivePipe_Entry>*  ___queue;

/// @brief Field pool, offset: 0x18, size: 0x8, def value: None
 ::Telepathy::Pool_1<::ArrayW<uint8_t>>*  ___pool;

/// @brief Field queueCounter, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___queueCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::MagnificentReceivePipe, ___queue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Telepathy::MagnificentReceivePipe, ___pool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Telepathy::MagnificentReceivePipe, ___queueCounter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Telepathy::MagnificentReceivePipe) == 0x28, "Size mismatch!");

} // namespace end def Telepathy
