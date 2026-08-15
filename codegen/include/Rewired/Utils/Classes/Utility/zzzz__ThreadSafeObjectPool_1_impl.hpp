#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ThreadSafeObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__ThreadSafeObjectPool_1_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__AList_1_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__IObjectPool_1_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__IObjectPool_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::Rewired::Utils::Classes::Data::AList_1<T>*& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
template<typename T>
constexpr ::Rewired::Utils::Classes::Data::AList_1<T>* const& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_set__pool(::Rewired::Utils::Classes::Data::AList_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
template<typename T>
constexpr ::System::Func_1<T>*& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get__createInstanceDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createInstanceDelegate;
}
template<typename T>
constexpr ::System::Func_1<T>* const& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get__createInstanceDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createInstanceDelegate;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_set__createInstanceDelegate(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____createInstanceDelegate = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get__processOnReturnDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processOnReturnDelegate;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get__processOnReturnDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processOnReturnDelegate;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_set__processOnReturnDelegate(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processOnReturnDelegate = value;
}
template<typename T>
constexpr uint64_t& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get_ukytpvqOuatTRglkifmDPFzWfrmCA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ukytpvqOuatTRglkifmDPFzWfrmCA;
}
template<typename T>
constexpr uint64_t const& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get_ukytpvqOuatTRglkifmDPFzWfrmCA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ukytpvqOuatTRglkifmDPFzWfrmCA;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_set_ukytpvqOuatTRglkifmDPFzWfrmCA(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ukytpvqOuatTRglkifmDPFzWfrmCA = value;
}
template<typename T>
constexpr int32_t& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get_GmoVmndvzEeynECRbJpZzoTFpclU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GmoVmndvzEeynECRbJpZzoTFpclU;
}
template<typename T>
constexpr int32_t const& Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_get_GmoVmndvzEeynECRbJpZzoTFpclU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GmoVmndvzEeynECRbJpZzoTFpclU;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::__cordl_internal_set_GmoVmndvzEeynECRbJpZzoTFpclU(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GmoVmndvzEeynECRbJpZzoTFpclU = value;
}
template<typename T>
inline uint64_t Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::get_InstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"get_InstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::_ctor(::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::Clear(bool  reduceSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"Clear", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reduceSize);
}
template<typename T>
inline T Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::Return(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"Return", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::Return(::System::Collections::Generic::IList_1<T>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"Return", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, items);
}
template<typename T>
inline ::System::Object* Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::vBlaLvfnUYlgjBWtHwjIOwSLKbTiB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"vBlaLvfnUYlgjBWtHwjIOwSLKbTiB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline bool Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::OLNDluDTbhjphAMFOlBcpqmdTFFHA(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"OLNDluDTbhjphAMFOlBcpqmdTFFHA", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename T>
inline T Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::CreateInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"CreateInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline uint64_t Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::IncrementInstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(),
                        {"IncrementInstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
template<typename T>
inline ::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>* Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
template<typename T>
inline ::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>* Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::New_ctor(::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Utils::Classes::Utility::IObjectPool"
template<typename T>
constexpr  Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::operator ::Rewired::Utils::Classes::Utility::IObjectPool*() noexcept {
return static_cast<::Rewired::Utils::Classes::Utility::IObjectPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Classes::Utility::IObjectPool"
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::IObjectPool* Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::i___Rewired__Utils__Classes__Utility__IObjectPool() noexcept {
return static_cast<::Rewired::Utils::Classes::Utility::IObjectPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Utils::Classes::Utility::IObjectPool_1<T>"
template<typename T>
constexpr  Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::operator ::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*() noexcept {
return static_cast<::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Classes::Utility::IObjectPool_1<T>"
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::IObjectPool_1<T>* Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::i___Rewired__Utils__Classes__Utility__IObjectPool_1_T_() noexcept {
return static_cast<::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::ThreadSafeObjectPool_1<T>::ThreadSafeObjectPool_1()   {
}
