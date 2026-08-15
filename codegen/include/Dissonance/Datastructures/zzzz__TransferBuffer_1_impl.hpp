#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/TransferBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Datastructures/zzzz__TransferBuffer_1_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr void Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_set__buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
template<typename T>
constexpr int32_t& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__readHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readHead;
}
template<typename T>
constexpr int32_t const& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__readHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readHead;
}
template<typename T>
constexpr void Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_set__readHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readHead = value;
}
template<typename T>
constexpr int32_t& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__unread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unread;
}
template<typename T>
constexpr int32_t const& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__unread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unread;
}
template<typename T>
constexpr void Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_set__unread(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unread = value;
}
template<typename T>
constexpr int32_t& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__writeHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeHead;
}
template<typename T>
constexpr int32_t const& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__writeHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeHead;
}
template<typename T>
constexpr void Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_set__writeHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeHead = value;
}
template<typename T>
constexpr ::ArrayW<T>& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__singleReadItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____singleReadItem;
}
template<typename T>
constexpr ::ArrayW<T> const& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__singleReadItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____singleReadItem;
}
template<typename T>
constexpr void Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_set__singleReadItem(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____singleReadItem = value;
}
template<typename T>
constexpr ::ArrayW<T>& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__singleWriteItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____singleWriteItem;
}
template<typename T>
constexpr ::ArrayW<T> const& Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_get__singleWriteItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____singleWriteItem;
}
template<typename T>
constexpr void Dissonance::Datastructures::TransferBuffer_1<T>::__cordl_internal_set__singleWriteItem(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____singleWriteItem = value;
}
template<typename T>
inline void Dissonance::Datastructures::TransferBuffer_1<T>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Datastructures::TransferBuffer_1<T>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename T>
inline ::Dissonance::Log* Dissonance::Datastructures::TransferBuffer_1<T>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Datastructures::TransferBuffer_1<T>*>();
}
template<typename T>
inline int32_t Dissonance::Datastructures::TransferBuffer_1<T>::get_EstimatedUnreadCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"get_EstimatedUnreadCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Dissonance::Datastructures::TransferBuffer_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Datastructures::TransferBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline bool Dissonance::Datastructures::TransferBuffer_1<T>::TryWrite(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"TryWrite", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool Dissonance::Datastructures::TransferBuffer_1<T>::TryWriteAll(::System::ArraySegment_1<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"TryWriteAll", {}, {::i2c::type_of<::System::ArraySegment_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
template<typename T>
inline int32_t Dissonance::Datastructures::TransferBuffer_1<T>::WriteSome(::System::ArraySegment_1<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"WriteSome", {}, {::i2c::type_of<::System::ArraySegment_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data);
}
template<typename T>
inline bool Dissonance::Datastructures::TransferBuffer_1<T>::Read(::by_ref<T>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool Dissonance::Datastructures::TransferBuffer_1<T>::Read(::ArrayW<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
template<typename T>
inline bool Dissonance::Datastructures::TransferBuffer_1<T>::Read(::ArrayW<T>  data, int32_t  readCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, readCount);
}
template<typename T>
inline bool Dissonance::Datastructures::TransferBuffer_1<T>::Read(::System::ArraySegment_1<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
template<typename T>
inline void Dissonance::Datastructures::TransferBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::TransferBuffer_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::Datastructures::TransferBuffer_1<T>* Dissonance::Datastructures::TransferBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Datastructures::TransferBuffer_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Datastructures::TransferBuffer_1<T>::TransferBuffer_1()   {
}
