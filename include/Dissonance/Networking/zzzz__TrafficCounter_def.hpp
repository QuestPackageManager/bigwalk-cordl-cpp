#pragma once
// IWYU pragma private; include "Dissonance/Networking/TrafficCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrafficCounter)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking {
class TrafficCounter;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::TrafficCounter*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::TrafficCounter*, "Dissonance.Networking", "TrafficCounter");
// Dependencies System.Object
namespace Dissonance::Networking {
// Is value type: false
// CS Name: Dissonance.Networking.TrafficCounter
class CORDL_TYPE TrafficCounter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Bytes, put=set_Bytes)) uint32_t  Bytes;

 __declspec(property(get=get_BytesPerSecond, put=set_BytesPerSecond)) uint32_t  BytesPerSecond;

 __declspec(property(get=get_Packets, put=set_Packets)) uint32_t  Packets;

/// @brief Field <BytesPerSecond>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__BytesPerSecond_k__BackingField, put=__cordl_internal_set__BytesPerSecond_k__BackingField)) uint32_t  _BytesPerSecond_k__BackingField;

/// @brief Field <Bytes>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Bytes_k__BackingField, put=__cordl_internal_set__Bytes_k__BackingField)) uint32_t  _Bytes_k__BackingField;

/// @brief Field <Packets>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Packets_k__BackingField, put=__cordl_internal_set__Packets_k__BackingField)) uint32_t  _Packets_k__BackingField;

/// @brief Field _runningTotal, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__runningTotal, put=__cordl_internal_set__runningTotal)) uint32_t  _runningTotal;

/// @brief Field _updated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__updated, put=__cordl_internal_set__updated)) ::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime,uint32_t>>*  _updated;

/// @brief Method Combine, addr 0x1805eb980, size 0x60, virtual false, abstract: false, final false
static inline void Combine(::by_ref<uint32_t>  packets, ::by_ref<uint32_t>  bytes, ::by_ref<uint32_t>  totalBytesPerSecond, ::ArrayW<::Dissonance::Networking::TrafficCounter*>  counters) ;

/// @brief Method Format, addr 0x1805ebbc0, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW Format(uint64_t  packets, uint64_t  bytes, uint64_t  bytesPerSecond) ;

/// @brief Method FormatByteString, addr 0x1805eb9e0, size 0x1e0, virtual false, abstract: false, final false
static inline ::StringW FormatByteString(::System::Decimal  bytes) ;

static inline ::Dissonance::Networking::TrafficCounter* New_ctor() ;

/// @brief Method ToString, addr 0x1805ebc70, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Update, addr 0x1805ebd20, size 0x150, virtual false, abstract: false, final false
inline void Update(int32_t  bytes, ::System::Nullable_1<::System::DateTime>  now) ;

constexpr uint32_t const& __cordl_internal_get__BytesPerSecond_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__BytesPerSecond_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__Bytes_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__Bytes_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__Packets_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__Packets_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__runningTotal() const;

constexpr uint32_t& __cordl_internal_get__runningTotal() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime,uint32_t>>* const& __cordl_internal_get__updated() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime,uint32_t>>*& __cordl_internal_get__updated() ;

constexpr void __cordl_internal_set__BytesPerSecond_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__Bytes_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__Packets_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__runningTotal(uint32_t  value) ;

constexpr void __cordl_internal_set__updated(::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime,uint32_t>>*  value) ;

/// @brief Method .ctor, addr 0x1805ebe70, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bytes, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Bytes() ;

/// @brief Method get_BytesPerSecond, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_BytesPerSecond() ;

/// @brief Method get_Packets, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Packets() ;

/// @brief Method set_Bytes, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_Bytes(uint32_t  value) ;

/// @brief Method set_BytesPerSecond, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_BytesPerSecond(uint32_t  value) ;

/// @brief Method set_Packets, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Packets(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrafficCounter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrafficCounter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrafficCounter(TrafficCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrafficCounter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrafficCounter(TrafficCounter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16893};

/// @brief Field <Packets>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  ____Packets_k__BackingField;

/// @brief Field <Bytes>k__BackingField, offset: 0x14, size: 0x4, def value: None
 uint32_t  ____Bytes_k__BackingField;

/// @brief Field <BytesPerSecond>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____BytesPerSecond_k__BackingField;

/// @brief Field _runningTotal, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ____runningTotal;

/// @brief Field _updated, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime,uint32_t>>*  ____updated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::TrafficCounter, ____Packets_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TrafficCounter, ____Bytes_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TrafficCounter, ____BytesPerSecond_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TrafficCounter, ____runningTotal) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TrafficCounter, ____updated) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::TrafficCounter) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Networking
