#pragma once
// IWYU pragma private; include "System/Xml/IncrementalReadDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
//  Writing Method size for method: ::System::Xml::IncrementalReadDecoder.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IncrementalReadDecoder::*)()>(&::System::Xml::IncrementalReadDecoder::get_IsFull)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::IncrementalReadDecoder*>(),
                    {::i2c::class_of<::System::Xml::IncrementalReadDecoder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDecoder.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IncrementalReadDecoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::IncrementalReadDecoder::Decode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::IncrementalReadDecoder*>(),
                    {::i2c::class_of<::System::Xml::IncrementalReadDecoder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IncrementalReadDecoder::*)()>(&::System::Xml::IncrementalReadDecoder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::IncrementalReadDecoder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Xml::IncrementalReadDecoder::get_IsFull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::IncrementalReadDecoder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::IncrementalReadDecoder::Decode(::ArrayW<char16_t>  chars, int32_t  startPos, int32_t  len)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::IncrementalReadDecoder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, startPos, len);
}
inline void System::Xml::IncrementalReadDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::IncrementalReadDecoder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::IncrementalReadDecoder* System::Xml::IncrementalReadDecoder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::IncrementalReadDecoder*>());
}
// Ctor Parameters []
constexpr ::System::Xml::IncrementalReadDecoder::IncrementalReadDecoder()   {
}
