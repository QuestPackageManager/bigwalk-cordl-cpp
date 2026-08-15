#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/BufferedData_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__BufferedData_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& WaveHarmonic::Crest::Utility::BufferedData_1<T>::__cordl_internal_get__Buffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Buffers;
}
template<typename T>
constexpr ::ArrayW<T> const& WaveHarmonic::Crest::Utility::BufferedData_1<T>::__cordl_internal_get__Buffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Buffers;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Utility::BufferedData_1<T>::__cordl_internal_set__Buffers(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Buffers = value;
}
template<typename T>
constexpr int32_t& WaveHarmonic::Crest::Utility::BufferedData_1<T>::__cordl_internal_get__CurrentFrameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentFrameIndex;
}
template<typename T>
constexpr int32_t const& WaveHarmonic::Crest::Utility::BufferedData_1<T>::__cordl_internal_get__CurrentFrameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentFrameIndex;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Utility::BufferedData_1<T>::__cordl_internal_set__CurrentFrameIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentFrameIndex = value;
}
template<typename T>
inline T WaveHarmonic::Crest::Utility::BufferedData_1<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::BufferedData_1<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Utility::BufferedData_1<T>::set_Current(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::BufferedData_1<T>*>(),
                        {"set_Current", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline int32_t WaveHarmonic::Crest::Utility::BufferedData_1<T>::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::BufferedData_1<T>*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Utility::BufferedData_1<T>::_ctor(int32_t  size, ::System::Func_1<T>*  initialize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::BufferedData_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, initialize);
}
template<typename T>
inline T WaveHarmonic::Crest::Utility::BufferedData_1<T>::Previous(int32_t  framesBack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::BufferedData_1<T>*>(),
                        {"Previous", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, framesBack);
}
template<typename T>
inline void WaveHarmonic::Crest::Utility::BufferedData_1<T>::Flip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::BufferedData_1<T>*>(),
                        {"Flip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Utility::BufferedData_1<T>::RunLambda(::System::Action_1<T>*  lambda)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::BufferedData_1<T>*>(),
                        {"RunLambda", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lambda);
}
template<typename T>
inline ::WaveHarmonic::Crest::Utility::BufferedData_1<T>* WaveHarmonic::Crest::Utility::BufferedData_1<T>::New_ctor(int32_t  size, ::System::Func_1<T>*  initialize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Utility::BufferedData_1<T>*>(size, initialize));
}
// Ctor Parameters []
template<typename T>
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<T>::BufferedData_1()   {
}
