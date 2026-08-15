#pragma once
// IWYU pragma private; include "Telepathy/MagnificentReceivePipe.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__EventType_impl.hpp"
#include "Telepathy/zzzz__MagnificentReceivePipe_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "Telepathy/zzzz__EventType_def.hpp"
#include "Telepathy/zzzz__MagnificentReceivePipe_def.hpp"
#include "Telepathy/zzzz__Pool_1_def.hpp"
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe_Entry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentReceivePipe_Entry::*)(int32_t, ::Telepathy::EventType, ::System::ArraySegment_1<uint8_t>)>(&::Telepathy::MagnificentReceivePipe_Entry::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e58600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe_Entry>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Telepathy::EventType>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Telepathy::MagnificentReceivePipe_Entry::_ctor(int32_t  connectionId, ::Telepathy::EventType  eventType, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe_Entry>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Telepathy::EventType>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, connectionId, eventType, data);
}
// Ctor Parameters [CppParam { name: "connectionId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventType", ty: "::Telepathy::EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Telepathy::MagnificentReceivePipe_Entry::MagnificentReceivePipe_Entry(int32_t  connectionId, ::Telepathy::EventType  eventType, ::System::ArraySegment_1<uint8_t>  data) noexcept  {
this->connectionId = connectionId;
this->eventType = eventType;
this->data = data;
}
// Ctor Parameters []
constexpr ::Telepathy::MagnificentReceivePipe_Entry::MagnificentReceivePipe_Entry()   {
}
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::*)()>(&::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0.__ctor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::*)()>(&::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e5b430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::__cordl_internal_get_MaxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMessageSize;
}
constexpr int32_t const& Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::__cordl_internal_get_MaxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMessageSize;
}
constexpr void Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::__cordl_internal_set_MaxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxMessageSize = value;
}
inline void Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0* Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Telepathy::MagnificentReceivePipe___c__DisplayClass4_0::MagnificentReceivePipe___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentReceivePipe::*)(int32_t)>(&::Telepathy::MagnificentReceivePipe::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e58f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe.Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::MagnificentReceivePipe::*)(int32_t)>(&::Telepathy::MagnificentReceivePipe::Count)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e58920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe.get_TotalCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::MagnificentReceivePipe::*)()>(&::Telepathy::MagnificentReceivePipe::get_TotalCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e590d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"get_TotalCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe.get_PoolCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::MagnificentReceivePipe::*)()>(&::Telepathy::MagnificentReceivePipe::get_PoolCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e59030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"get_PoolCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentReceivePipe::*)(int32_t, ::Telepathy::EventType, ::System::ArraySegment_1<uint8_t>)>(&::Telepathy::MagnificentReceivePipe::Enqueue)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181e589f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"Enqueue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Telepathy::EventType>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe.TryPeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::MagnificentReceivePipe::*)(::by_ref<int32_t>, ::by_ref<::Telepathy::EventType>, ::by_ref<::System::ArraySegment_1<uint8_t>>)>(&::Telepathy::MagnificentReceivePipe::TryPeek)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181e58df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"TryPeek", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Telepathy::EventType>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe.TryDequeue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::MagnificentReceivePipe::*)()>(&::Telepathy::MagnificentReceivePipe::TryDequeue)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181e58c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"TryDequeue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentReceivePipe.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentReceivePipe::*)()>(&::Telepathy::MagnificentReceivePipe::Clear)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181e587e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::Telepathy::MagnificentReceivePipe_Entry>*& Telepathy::MagnificentReceivePipe::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::System::Collections::Generic::Queue_1<::Telepathy::MagnificentReceivePipe_Entry>* const& Telepathy::MagnificentReceivePipe::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void Telepathy::MagnificentReceivePipe::__cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::Telepathy::MagnificentReceivePipe_Entry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
constexpr ::Telepathy::Pool_1<::ArrayW<uint8_t>>*& Telepathy::MagnificentReceivePipe::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr ::Telepathy::Pool_1<::ArrayW<uint8_t>>* const& Telepathy::MagnificentReceivePipe::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr void Telepathy::MagnificentReceivePipe::__cordl_internal_set_pool(::Telepathy::Pool_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& Telepathy::MagnificentReceivePipe::__cordl_internal_get_queueCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queueCounter;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& Telepathy::MagnificentReceivePipe::__cordl_internal_get_queueCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queueCounter;
}
constexpr void Telepathy::MagnificentReceivePipe::__cordl_internal_set_queueCounter(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queueCounter = value;
}
inline void Telepathy::MagnificentReceivePipe::_ctor(int32_t  MaxMessageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MaxMessageSize);
}
inline int32_t Telepathy::MagnificentReceivePipe::Count(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, connectionId);
}
inline int32_t Telepathy::MagnificentReceivePipe::get_TotalCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"get_TotalCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Telepathy::MagnificentReceivePipe::get_PoolCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"get_PoolCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Telepathy::MagnificentReceivePipe::Enqueue(int32_t  connectionId, ::Telepathy::EventType  eventType, ::System::ArraySegment_1<uint8_t>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"Enqueue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Telepathy::EventType>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, eventType, message);
}
inline bool Telepathy::MagnificentReceivePipe::TryPeek(::by_ref<int32_t>  connectionId, ::by_ref<::Telepathy::EventType>  eventType, ::by_ref<::System::ArraySegment_1<uint8_t>>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"TryPeek", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Telepathy::EventType>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connectionId, eventType, data);
}
inline bool Telepathy::MagnificentReceivePipe::TryDequeue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"TryDequeue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Telepathy::MagnificentReceivePipe::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentReceivePipe*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Telepathy::MagnificentReceivePipe* Telepathy::MagnificentReceivePipe::New_ctor(int32_t  MaxMessageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::MagnificentReceivePipe*>(MaxMessageSize));
}
// Ctor Parameters []
constexpr ::Telepathy::MagnificentReceivePipe::MagnificentReceivePipe()   {
}
