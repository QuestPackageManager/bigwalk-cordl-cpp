#pragma once
// IWYU pragma private; include "Telepathy/MagnificentSendPipe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__MagnificentSendPipe_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "Telepathy/zzzz__MagnificentSendPipe_def.hpp"
#include "Telepathy/zzzz__Pool_1_def.hpp"
//  Writing Method size for method: ::Telepathy::MagnificentSendPipe___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentSendPipe___c__DisplayClass2_0::*)()>(&::Telepathy::MagnificentSendPipe___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentSendPipe___c__DisplayClass2_0.__ctor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Telepathy::MagnificentSendPipe___c__DisplayClass2_0::*)()>(&::Telepathy::MagnificentSendPipe___c__DisplayClass2_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e5b430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe___c__DisplayClass2_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Telepathy::MagnificentSendPipe___c__DisplayClass2_0::__cordl_internal_get_MaxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMessageSize;
}
constexpr int32_t const& Telepathy::MagnificentSendPipe___c__DisplayClass2_0::__cordl_internal_get_MaxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMessageSize;
}
constexpr void Telepathy::MagnificentSendPipe___c__DisplayClass2_0::__cordl_internal_set_MaxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxMessageSize = value;
}
inline void Telepathy::MagnificentSendPipe___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Telepathy::MagnificentSendPipe___c__DisplayClass2_0::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe___c__DisplayClass2_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Telepathy::MagnificentSendPipe___c__DisplayClass2_0* Telepathy::MagnificentSendPipe___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::MagnificentSendPipe___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Telepathy::MagnificentSendPipe___c__DisplayClass2_0::MagnificentSendPipe___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::Telepathy::MagnificentSendPipe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentSendPipe::*)(int32_t)>(&::Telepathy::MagnificentSendPipe::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e59670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentSendPipe.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::MagnificentSendPipe::*)()>(&::Telepathy::MagnificentSendPipe::get_Count)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e590d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentSendPipe.get_PoolCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::MagnificentSendPipe::*)()>(&::Telepathy::MagnificentSendPipe::get_PoolCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e59030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"get_PoolCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentSendPipe.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentSendPipe::*)(::System::ArraySegment_1<uint8_t>)>(&::Telepathy::MagnificentSendPipe::Enqueue)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181e59530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"Enqueue", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentSendPipe.DequeueAndSerializeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::MagnificentSendPipe::*)(::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>)>(&::Telepathy::MagnificentSendPipe::DequeueAndSerializeAll)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181e59250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"DequeueAndSerializeAll", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::MagnificentSendPipe.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::MagnificentSendPipe::*)()>(&::Telepathy::MagnificentSendPipe::Clear)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181e59170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::System::ArraySegment_1<uint8_t>>*& Telepathy::MagnificentSendPipe::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ArraySegment_1<uint8_t>>* const& Telepathy::MagnificentSendPipe::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void Telepathy::MagnificentSendPipe::__cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
constexpr ::Telepathy::Pool_1<::ArrayW<uint8_t>>*& Telepathy::MagnificentSendPipe::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr ::Telepathy::Pool_1<::ArrayW<uint8_t>>* const& Telepathy::MagnificentSendPipe::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr void Telepathy::MagnificentSendPipe::__cordl_internal_set_pool(::Telepathy::Pool_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
inline void Telepathy::MagnificentSendPipe::_ctor(int32_t  MaxMessageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MaxMessageSize);
}
inline int32_t Telepathy::MagnificentSendPipe::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Telepathy::MagnificentSendPipe::get_PoolCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"get_PoolCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Telepathy::MagnificentSendPipe::Enqueue(::System::ArraySegment_1<uint8_t>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"Enqueue", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline bool Telepathy::MagnificentSendPipe::DequeueAndSerializeAll(::by_ref<::ArrayW<uint8_t>>  payload, ::by_ref<int32_t>  packetSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"DequeueAndSerializeAll", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, payload, packetSize);
}
inline void Telepathy::MagnificentSendPipe::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::MagnificentSendPipe*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Telepathy::MagnificentSendPipe* Telepathy::MagnificentSendPipe::New_ctor(int32_t  MaxMessageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::MagnificentSendPipe*>(MaxMessageSize));
}
// Ctor Parameters []
constexpr ::Telepathy::MagnificentSendPipe::MagnificentSendPipe()   {
}
